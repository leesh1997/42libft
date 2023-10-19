/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:28:48 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/18 18:52:36 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *src, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*temp == (unsigned char)c)
			return (temp);
		temp++;
	}
	return (0);
}
