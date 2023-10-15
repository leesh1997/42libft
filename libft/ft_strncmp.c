/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:25:53 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/15 16:52:22 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;
	int		result;

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
