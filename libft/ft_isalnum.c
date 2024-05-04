/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:47:41 by marvin            #+#    #+#             */
/*   Updated: 2024/02/20 10:06:36 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	num;

	num = ft_isalpha(c);
	if (ft_isdigit(c) > 0)
		return (4);
	else if (num >= 1)
		return (num);
	return (0);
}
