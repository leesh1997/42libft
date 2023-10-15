/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:15:20 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/15 15:41:58 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(long long num)
{
	int	cnt;

	cnt = 0;
	if (num <= 0)
	{
		num *= -1;
		cnt++;
	}
	while (num > 0)
	{
		num /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		len;
	long	num;

	len = num_len(n);
	num = n;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	arr[len--] = '\0';
	if (num < 0)
	{
		arr[0] = '-';
		num *= -1;
	}
	if (num == 0)
		arr[0] = '0';
	while (num > 0)
	{
		arr[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (arr);
}
