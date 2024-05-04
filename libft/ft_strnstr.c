/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:59:21 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:55 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t num)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (*little == '\0' || little == big)
		return ((char *)(big));
	while (i < num && big[i])
	{
		j = 0;
		while ((i + j) < num && big[i + j] == little[j] && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i]));
		}
		i++;
	}
	return (0);
}
