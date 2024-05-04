/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:22:17 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:52 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*my_array;

	i = 0;
	my_array = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (my_array == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		my_array[i] = (*f)(i, s[i]);
		i++;
	}
	my_array[i] = '\0';
	return (my_array);
}
