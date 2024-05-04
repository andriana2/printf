/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:58:45 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 13:28:55 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static int	abs_num(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

static int	num_digit(int n)
{
	int	i;
	int	cpy_n;

	i = 1;
	cpy_n = n;
	if (n == -2147483648)
		return (11);
	if (negative(n) == 1)
		cpy_n = abs_num(cpy_n);
	while (cpy_n > 9)
	{
		cpy_n = cpy_n / 10;
		i++;
	}
	if (negative(n) == 1)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		n_cpy;
	char	*number;

	if (n == -2147483648)
		n_cpy = abs_num(-2147483647);
	else
		n_cpy = abs_num(n);
	number = (char *)malloc(sizeof(char) * num_digit(n) + 1);
	if (number == NULL)
		return (NULL);
	if (negative(n) == 1)
		number[0] = '-';
	i = num_digit(n) - 1;
	while (i >= negative(n))
	{
		number[i] = (char )(n_cpy % 10 + 48);
		n_cpy = (int) n_cpy / 10;
		i--;
	}
	if (n == -2147483648)
		number[10] = '8';
	number[num_digit(n)] = '\0';
	return (number);
}
