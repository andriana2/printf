/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:03:18 by marvin            #+#    #+#             */
/*   Updated: 2024/02/20 13:28:52 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (ft_isascii(c) == 1)
	{
		if (c == ' ')
			return (1);
		else if ((c >= 0 && c <= 31) || c == 127)
			return (0);
		else if (ft_isalnum(c) > 0)
			return (1);
		else
			return (1);
	}
	return (0);
}
