/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:45:52 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/11 14:40:30 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	dest = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (0);
	dest = ft_strlcpy(dest, s1[start], end - start + 1);
	return (dest);
}
