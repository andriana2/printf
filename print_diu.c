/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:38:10 by marianadovh       #+#    #+#             */
/*   Updated: 2024/03/22 08:49:20 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_number(ssize_t num)
{
	ssize_t	number;
	ssize_t	counter;

	counter = 1;
	if (num < 0)
		num = -num;
	number = num;
	while (number != 0)
	{
		num = num / 10;
		if (num == 0)
			break ;
		counter++;
	}
	return (counter);
}

int	print_i(va_list vargs)
{
	int	n;
	int	number;

	number = va_arg(vargs, int);
	n = 0;
	if (number < 0)
		n = 1;
	n += count_number(number);
	ft_putnbr_fd(number, 1);
	return (n);
}

int	print_u(va_list vargs)
{
	int				n;
	unsigned int	number;

	number = va_arg(vargs, unsigned int);
	if (number < 0)
		number = 4294967296 + number;
	n = count_number(number);
	ft_putubr_fd(number, 1);
	return (n);
}

void	ft_putubr_fd(unsigned int n, int fd)
{
	char	digit;

	if (n >= 10)
		ft_putubr_fd(n / 10, fd);
	digit = '0' + (n % 10);
	write(fd, &digit, 1);
}
