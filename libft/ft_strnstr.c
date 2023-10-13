/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:34:08 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/13 18:31:58 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (*str && i < len)
	{
		j = 0;
		s1 = (char *)str;
		s2 = (char *)to_find;
		while (*s1 && *s2 && *s1 == *s2 && i + j < len)
		{
			++s1;
			++s2;
			j++;
		}
		if (!*s2)
			return ((char *)str);
		++str;
		i++;
	}
	return (0);
}
