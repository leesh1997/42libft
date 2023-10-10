/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:59:24 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 18:05:28 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*temp;

	temp = malloc(n * size);
	if (temp == 0)
		return (0);
	ft_memset(temp, 0, n * size);
	return (temp);
}
