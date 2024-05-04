/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:08:33 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/22 11:01:00 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*clean(t_list *start_list, void (*del)(void *), void *cont)
{
	free(cont);
	ft_lstclear(&start_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_list;
	t_list	*new_node;
	t_list	*last_node;
	void	*cont;

	start_list = NULL;
	last_node = NULL;
	while (lst)
	{
		cont = (f)(lst->content);
		new_node = ft_lstnew(cont);
		if (new_node == NULL)
			return (clean(start_list, del, cont));
		if (!start_list)
			start_list = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		lst = lst->next;
	}
	return (start_list);
}
