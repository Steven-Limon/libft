/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:55:04 by slimon            #+#    #+#             */
/*   Updated: 2019/05/01 21:55:07 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && j < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if(dst != 0 && i <= dstsize)
		dst[i] = '\0';
	return (i + j);
}
