/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:26:46 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/13 14:38:35 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*f_str;

	i = 0;
	len = ft_strlen(s);
	f_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!f_str)
		return (0);
	while (i < len)
	{
		f_str[i] = f(i, s[i]);
		i++;
	}
	f_str[i] = '\0';
	return (f_str);
}
