/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:16:48 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 16:28:31 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*temp;
	char	*str;

	temp = dest;
	str = src;
	while (n > 0)
	{
		*temp = *str;
		temp++;
		str++;
		n--;
	}
	return (temp);
}
