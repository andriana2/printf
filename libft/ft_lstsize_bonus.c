/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:09:07 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:09 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lst_cpy;

	i = 0;
	lst_cpy = lst;
	while (lst_cpy != NULL)
	{
		lst_cpy = lst_cpy->next;
		i++;
	}
	return (i);
}
