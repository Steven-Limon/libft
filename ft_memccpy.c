/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:23:10 by slimon            #+#    #+#             */
/*   Updated: 2019/05/01 16:23:12 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	byte i;
	byte *dst_bp;
	byte *src_bp;

	i = 0;
	while (i < n)
	{
		dst_bp = ((byte *) dst);
		src_bp = ((byte *) src);
		if (src_bp[i] == (byte) c)
			return (dst_bp + 1);
		dst_bp[i] = src_bp[i];
		i++;
	}
	return (dst);
}
