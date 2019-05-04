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

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	unsigned char *dst_bp;
	unsigned char *src_bp;

	i = 0;
	while (i < n)
	{
		dst_bp = ((unsigned char *) dst);
		src_bp = ((unsigned char *) src);
		if (src_bp[i] == (unsigned char) c)
			return (dst_bp + 1);
		dst_bp[i] = src_bp[i];
		i++;
	}
	return (dst);
}
