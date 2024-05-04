/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_xep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:44:10 by marianadovh       #+#    #+#             */
/*   Updated: 2024/03/18 00:58:39 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_xe(va_list vargs)
{
	unsigned int	hex;

	hex = va_arg(vargs, unsigned int);
	if (hex < 0)
		hex = 4294967296 + hex;
	return (ft_putxbr_fd(hex, 1, 0, 0));
}

int	print_x(va_list vargs)
{
	unsigned int	hex;

	hex = va_arg(vargs, unsigned int);
	if (hex < 0)
		hex = 4294967295 + hex;
	return (ft_putxbr_fd(hex, 1, 0, 1));
}

int	print_p(va_list vargs)
{
	int					num_bytes;
	unsigned long long	hex;

	hex = va_arg(vargs, unsigned long long);
	write(1, "0x", 2);
	num_bytes = 2;
	return (num_bytes + ft_putpbr_fd(hex, 1, 0));
}

int	ft_putxbr_fd(unsigned int n, int fd, int num_bytes, int flag)
{
	char	digit;

	if (n >= 16)
		num_bytes = ft_putxbr_fd(n / 16, fd, num_bytes, flag);
	if (flag == 1)
		digit = HEX_MA[n % 16];
	else
		digit = HEX_MI[n % 16];
	write(fd, &digit, 1);
	num_bytes++;
	return (num_bytes);
}

int	ft_putpbr_fd(unsigned long long n, int fd, int num_bytes)
{
	char	digit;

	if (n >= 16)
		num_bytes = ft_putpbr_fd(n / 16, fd, num_bytes);
	digit = HEX_MI[n % 16];
	write(fd, &digit, 1);
	num_bytes++;
	return (num_bytes);
}
