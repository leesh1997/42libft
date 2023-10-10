/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:25:53 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 15:31:35 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;
	int				result;

	idx = 0;
	result = 0;
	while ((s1[idx] != '\0' || s2[idx] != '\0') && (idx < n))
	{
		if (s1[idx] != s2[idx])
		{			
			result = ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
			break ;
		}
		++idx;
	}
	return (result);
}
