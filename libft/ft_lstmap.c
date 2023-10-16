/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:25:59 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/16 17:12:21 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	if (!lst || !f)
		return (0);
	temp = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (!new)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
	}
	return (new);
}
