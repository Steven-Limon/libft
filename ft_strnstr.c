/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:35:29 by slimon            #+#    #+#             */
/*   Updated: 2019/05/02 18:35:43 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	
	i = 0;
	if(needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if(haystack[i] == needle[i])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
