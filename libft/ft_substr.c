/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:14:04 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/18 15:19:12 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;
	size_t	i;
	size_t	mal_len;

	s_len = ft_strlen(s);
	if (s_len < (start + len))
		mal_len = s_len - start;
	else
		mal_len = len;
	if (!s)
		return (0);
	if (s_len < start)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (mal_len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < len && i < s_len - start)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
