/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:34:36 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:19 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cp;
	const unsigned char	*src_cp;
	size_t				i;

	i = -1;
	dest_cp = dest;
	src_cp = src;
	if (src_cp == dest_cp && n > 0)
		return (dest);
	while (++i < n)
		dest_cp[i] = src_cp[i];
	return (dest);
}
