/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:16:20 by slimon            #+#    #+#             */
/*   Updated: 2019/05/03 20:16:22 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	char cc = (char) c;
	return ((cc >= 'A' && cc <= 'Z') || (cc >= 'a' && cc <= 'z') || (cc >= '0' && cc <= '9'));
}
