/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:05 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 15:52:38 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	temp;
	unsigned int	idx;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	idx = 0;
	temp = len_dst;
	while (src[idx] && (len_dst + idx + 1) < size)
	{
		dest[temp] = src[idx];
		++temp;
		++idx;
	}
	dest[temp] = '\0';
	if (len_dst > size)
		return (len_src + size);
	else
		return (len_src + len_dst);
}
