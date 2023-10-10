/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:45:50 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 17:59:13 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void s1, void s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{			
			result = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			break ;
		}
		i++;
	}
	return (result);
}
