/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:56:06 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 23:55:55 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_;
	size_t	src_;

	src_ = ft_strlen(src);
	dest_ = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (dest_ < size - 1 && size > 0)
	{
		while (((dest_ + j) < (size - 1)) && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (dest_ >= size)
		dest_ = size;
	return (dest_ + src_);
}
