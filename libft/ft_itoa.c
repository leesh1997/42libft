/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:15:20 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/11 17:20:57 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int num)
{
	int			cnt;
	long long	num2;

	cnt = 1;
	num2 = num;
	if (num2 < 0)
	{
		num2 *= -1;
		cnt++;
	}
	while (num2 > 0)
	{
		num2 /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char		*arr;
	int			i;
	int			len;

	i = 0;
	len = num_len(n);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	if (n < 0)
		arr[i++] = '-';
	while (i++ <= len)
	{
		arr[len - i] = (n % 10) + '0';
		n /= 10;
	}
	arr[len] = '\0';
	return (arr);
}
