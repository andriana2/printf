/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:38:16 by adovhany          #+#    #+#             */
/*   Updated: 2024/03/21 09:23:13 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_string(char c, va_list vargs)
{
	int	num_bytes;

	num_bytes = 0;
	if (c == '%')
		num_bytes = print_por();
	else if (c == 'c')
		num_bytes = print_c(vargs);
	else if (c == 's')
		num_bytes = print_s(vargs);
	else if (c == 'p')
		num_bytes = print_p(vargs);
	else if (c == 'i' || c == 'd')
		num_bytes = print_i(vargs);
	else if (c == 'u')
		num_bytes = print_u(vargs);
	else if (c == 'x')
		num_bytes = print_xe(vargs);
	else if (c == 'X')
		num_bytes = print_x(vargs);
	else
		num_bytes = 0;
	return (num_bytes);
}

static int	ft_print(const char *str, va_list vargs)
{
	int		i;
	int		flag;
	int		num_bytes;

	i = 0;
	flag = 0;
	num_bytes = 0;
	while (str[i])
	{
		if (str[i] == '%' && flag == 0)
			flag = 1;
		else if (flag == 0 && str[i] != '%')
		{
			num_bytes++;
			ft_putchar_fd(str[i], 1);
		}
		else if (flag == 1)
		{
			num_bytes += print_string(str[i], vargs);
			flag = 0;
		}
		i++;
	}
	return (num_bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	vargs;
	int		num_bytes;

	num_bytes = 0;
	if (!str)
	{
		write(1, "(null)", ft_strlen("(null)"));
		return (ft_strlen("(null)"));
	}
	if (ft_strlen(str) == 0)
		return (0);
	va_start(vargs, str);
	num_bytes = ft_print(str, vargs);
	va_end(vargs);
	return (num_bytes);
}
