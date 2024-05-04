/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:40:37 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/02 16:40:37 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*my_array;
	int		i;

	i = 0;
	my_array = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (my_array == NULL)
		return (NULL);
	while (s[i])
	{
		my_array[i] = s[i];
		i++;
	}
	my_array[i] = '\0';
	return (my_array);
}
