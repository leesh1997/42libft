/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:13 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/22 16:07:44 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		idx;
	int			minus;
	long long	temp;

	idx = 0;
	minus = 0;
	temp = 0;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '-')
	{
		minus++;
		idx++;
	}
	else if (str[idx] == '+')
		idx++;
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		temp = temp * 10 + str[idx] - '0';
		idx++;
	}
	if (minus == 1)
		temp *= -1;
	return (temp);
}
