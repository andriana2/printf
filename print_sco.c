/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sco.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:49:48 by marianadovh       #+#    #+#             */
/*   Updated: 2024/03/22 08:48:29 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_por(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	print_c(va_list vargs)
{
	int	letter;

	letter = va_arg(vargs, int);
	ft_putchar_fd(letter, 1);
	return (1);
}

int	print_s(va_list vargs)
{
	char	*str;

	str = va_arg(vargs, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (ft_strlen("(null)"));
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
