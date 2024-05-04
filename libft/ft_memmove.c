/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:36:17 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:21 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	const char	*src_cpy;
	size_t		i;

	dest_cpy = (char *)dest;
	src_cpy = (const char *)src;
	if (src_cpy == dest_cpy && n > 0)
		return (dest);
	if (src_cpy < dest_cpy && dest_cpy < (src_cpy + n))
	{
		i = n + 1;
		while (--i > 0)
			dest_cpy[i - 1] = src_cpy[i - 1];
	}
	else
	{
		i = -1;
		while (++i < n)
			dest_cpy[i] = src_cpy[i];
	}
	return (dest);
}
