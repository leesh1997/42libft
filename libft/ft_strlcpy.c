/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:33:01 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/11 14:37:47 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char const *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	temp;

	idx = 0;
	temp = ft_strlen(src);
	if (!dest || !src)
		return (0);
	while ((idx < temp) && (idx + 1 < size))
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (temp);
}
