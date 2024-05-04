/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:50:56 by marvin            #+#    #+#             */
/*   Updated: 2024/02/20 10:09:59 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	compare_string(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		counter;
	int		i;
	int		j;
	char	*my_array;

	j = -1;
	i = 0;
	while (s1[i] && compare_string(s1[i], set))
		i++;
	counter = ft_strlen(s1);
	while (i < counter && compare_string(s1[counter - 1], set))
		counter--;
	my_array = (char *)malloc(sizeof(char) * (counter - i + 1));
	if (my_array == NULL)
		return (NULL);
	while ((++j) + i < counter)
		my_array[j] = s1[j + i];
	my_array[j] = '\0';
	return (my_array);
}
