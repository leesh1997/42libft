/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:05 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/15 16:47:44 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	temp;
	size_t	idx;

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
