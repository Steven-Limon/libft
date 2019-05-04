/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:15:05 by slimon            #+#    #+#             */
/*   Updated: 2019/05/01 21:15:09 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *uc = c

	i = 0;
	while(i < n)
	{
		if(((unsigned char *)s)[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
