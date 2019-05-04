/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:35:18 by slimon            #+#    #+#             */
/*   Updated: 2019/05/03 19:35:21 by slimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 1;
	number = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || \
			str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
