/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:25:59 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/17 17:24:50 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	if (!lst || !f)
		return (0);
	new = ft_lstnew((*f)(lst -> content));
	if (!new)
	{
		del((*f)(lst -> content));
		return (0);
	}
	lst = lst -> next;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst -> content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, temp);
		lst = lst -> next;
	}
	return (new);
}
