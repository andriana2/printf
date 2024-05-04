/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:44:55 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:06:27 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	int		*my_array;

	my_array = (void *)malloc(num_elements * element_size);
	if (my_array == NULL)
		return (NULL);
	else
		ft_bzero(my_array, num_elements * element_size);
	return (my_array);
}
