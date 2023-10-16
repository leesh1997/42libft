/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:57:33 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/16 14:41:26 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cnt_word(const char *s, char c)
{
	size_t	i;
	size_t	cnt;
	size_t	flag;
	size_t	s_len;

	i = 0;
	cnt = 1;
	flag = 0;
	s_len = ft_strlen(s);
	while (s[i])
	{
		if (flag == 1 && s[i] == c && s[i + 1] != c)
			cnt++;
		else if (s[i] != c)
			flag = 1;
		i++;
		if (i + 1 == s_len)
			break ;
	}
	if (flag == 0)
		cnt = 0;
	return (cnt);
}

char	**split_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char	*result(const char *str, char c)
{
	size_t	str_len;
	size_t	i;
	char	*result_str;

	str_len = 0;
	while (*(str + str_len) && str[str_len] != c)
		str_len++;
	result_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!result_str)
		return (0);
	i = 0;
	while (i < str_len)
	{
		result_str[i] = str[i];
		i++;
	}
	result_str[i] = 0;
	return (result_str);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	arr_i;

	i = 0;
	arr_i = 0;
	arr = (char **)malloc(sizeof(char *) * (cnt_word(s, c) + 1));
	if (!arr)
		return (0);
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) && *(s + i) != c)
		{
			arr[arr_i] = result((s + i), c);
			if (arr[arr_i++] == 0)
				return (split_free(arr));
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	arr[arr_i] = 0;
	return (arr);
}
