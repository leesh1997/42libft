/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:44:41 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 17:44:47 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*str;

	if (!dest && !src)
		return (0);
	temp = dest;
	str = src;
	if (temp < str)
	{
		i = 0;
		while (i < n)
			((unsigned char *)temp)[i] = ((unsigned char *)str)[i++];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			((unsigned char *)temp)[i - 1] = ((unsigned char *)str)[i - 1];
			i--;
		}
	}
	return (temp);
}
