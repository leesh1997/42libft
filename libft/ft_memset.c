/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:00:49 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 16:12:45 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t num)
{
	size_t			i;
	unsigned char	*result;

	result = (unsigned char *)dest;
	i = 0;
	while (i < num)
	{
		result[i] = (unsigned char)c;
		i++;
	}
	return (result);
}
