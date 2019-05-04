/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:19:14 by slimon            #+#    #+#             */
/*   Updated: 2019/05/02 18:19:17 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *strstr(const char *haystack, const char *needle)
{
	int i;

	i = 0;
	if(needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		if(haystack[i] == needle[i])
			return ((char *)haystack + i);
	}
	return (NULL);
}
