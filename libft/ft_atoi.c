/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:05:46 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:12:20 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int number)
{
	if (number < 0)
		return (number * -1);
	else
		return (number);
}

static int	get_error(const char *nptr)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	while (i < ft_strlen(nptr))
	{
		if ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
			i += 0;
		else if (nptr[i] == '+' && num == 0)
			num = 1;
		else if (nptr[i] == '-' && num == 0)
			num = 2;
		else if ((nptr[i] > 47 && nptr[i] < 58) && num == 2)
			return (-1);
		else if ((nptr[i] > 47 && nptr[i] < 58) && num == 0)
			return (0);
		else if ((nptr[i] > 47 && nptr[i] < 58) && num != 3)
			return (1);
		else
			num = 3;
		i++;
	}
	return (-2);
}

static int	end(const char *str)
{
	if (get_error(str) < 0)
		return (-1);
	else
		return (1);
}

int	last_num(const char *s)
{
	size_t	i;
	int		flag;

	flag = 0;
	if (get_error(s) == -2)
		return (-2);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (((s[i] >= 9 && s[i] <= 13) || s[i] == ' ') && flag == 0)
			i++;
		else if (((s[i] == '+' || s[i] == '-') && flag == 0)
			|| (s[i] > 47 && s[i] < 58))
		{
			i++;
			flag = 1;
		}
		else if (s[i] < 48 || s[i] > 57)
			return (i);
	}
	return (ft_strlen(s));
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	num;
	int	finish_number;

	finish_number = 0;
	num = last_num(nptr);
	if (num == -2)
		return (0);
	i = ft_abs(get_error(nptr));
	while (i < num)
	{
		if (nptr[i] > 32 && nptr[i] != '+' && nptr[i] != '-')
			finish_number = finish_number * 10 + ((int) nptr[i] - 48);
		i++;
	}
	return (finish_number * end(nptr));
}
