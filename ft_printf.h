/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:38:26 by adovhany          #+#    #+#             */
/*   Updated: 2024/03/22 08:18:44 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

# define HEX_MA "0123456789ABCDEF"
# define HEX_MI "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_putubr_fd(unsigned int n, int fd);
int		ft_putxbr_fd(unsigned int n, int fd, int num_bytes, int flag);
int		ft_putpbr_fd(unsigned long long n, int fd, int num_bytes);
int		print_por(void);
int		print_c(va_list vargs);
int		print_s(va_list vargs);
int		print_p(va_list vargs);
int		count_number(ssize_t num);
int		print_i(va_list vargs);
int		print_u(va_list vargs);
int		print_xe(va_list vargs);
int		print_x(va_list vargs);

#endif