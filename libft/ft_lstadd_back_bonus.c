/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:54:47 by seunghun          #+#    #+#             */
/*   Updated: 2023/10/17 16:27:46 by seunghun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_back;

	last_back = *lst;
	if (!*lst && new)
	{
		*lst = new;
		return ;
	}
	last_back = ft_lstlast(*lst);
	last_back -> next = new;
}
