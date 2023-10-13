/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:57:33 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/13 18:52:58 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cnt_word(const char *s, char c)
{
	int	i;
	int	cnt;
	int	flag;

	i = 0;
	cnt = 1;
	flag = 0;
	while (s[i])
	{
		if (flag == 1 && s[i] == c && s[i + 1] != c)
			cnt++;
		else if (s[i] != c)
			flag = 1;
		i++;
	}
	return (cnt);
}

char	*result(const char *str, char c)
{
	int		str_len;
	int		i;
	char	*result_str;

	str_len = 0;
	while (*(str + str_len) && str[str_len] != c)
		str_len++;
	result_str = (char *)malloc(sizeof(char) * str_len + 1);
	if (result_str == 0)
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
	int		i;
	int		arr_i;
	int		size;

	i = 0;
	arr_i = 0;
	size = cnt_word(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (!arr)
		return (0);
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i) && *(s + i) != c)
			arr[arr_i++] = result((s + i), c);
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	arr[arr_i] = 0;
	return (arr);
}
