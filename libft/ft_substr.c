/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:14:04 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/10 18:50:59 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	s_len;
	size_t			i;

	s_len = ft_strlen(s);
	if (!s)
		return (0);
	if (s_len < start)
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * (len + 1));
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

/*
int main()
{
    char src[] = "substr function Implementation";

    int m = 7;
    int n = 12;

    char* dest = ft_substr(src, m, n);
    printf("%s\n", dest);
    return 0;
}
*/
