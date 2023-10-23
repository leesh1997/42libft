/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:25:59 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/23 14:22:22 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	void	*ptr;

	if (!lst || !(*f))
		return (0);
	new = 0;
	while (lst)
	{
		ptr = (*f)(lst -> content);
		temp = ft_lstnew(ptr);
		if (!temp)
		{
			ft_lstclear(&new, del);
			del(ptr);
			return (0);
		}
		ft_lstadd_back(&new, temp);
		lst = lst -> next;
	}
	temp = 0;
	return (new);
}
