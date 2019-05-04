/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:23:49 by slimon            #+#    #+#             */
/*   Updated: 2019/05/01 16:23:50 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	byte	*tmp_s1;
	byte	*tmp_s2;

	i = 0;	
	tmp_s1= (byte *)s1;
	tmp_s2= (byte *)s2;
	while (i < n)
	{
		if(tmp_s1[i] != tmp_s2[i])
			return (*tmp_s1 - *tmp_s2);
		i++;
	}
	return (0);
}
