/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:21:52 by slimon            #+#    #+#             */
/*   Updated: 2019/05/01 16:22:10 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *buffer;
	
	i = 0;
	buffer = (unsigned char *)malloc(sizeof(unsigned char) * len);
	while (i < n)
	{
		((unsigned char *)buffer)[i] = ((unsigned char)src)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)buffer)[i];
		i++;
	}
	free(buffer);
	return (dst);
}
*/
#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	j;
	byte	*src_ucp;
	byte	*dst_ucp;

	i = 0;
	j = len;
	src_ucp = (byte *)src;
	dst_ucp = (byte *)dst;
	if(src < dst && dst_ucp < src_ucp + len)
	{
		while (j > len)
		{
			dst_ucp[j] = src_ucp[j];
			j--;
		}
	}
	else
	{
		while(i < len)
		{
			dst_ucp[i] = src_ucp[i];
			i++;
		}
	}
	return (dst);
}
