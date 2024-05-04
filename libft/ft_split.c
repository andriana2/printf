/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovhany <adovhany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:47:45 by adovhany          #+#    #+#             */
/*   Updated: 2024/02/20 10:09:37 by adovhany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	flag;
	int	counter;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (i > 0)
		counter = 1;
	else
		counter = 0;
	i = -1;
	flag = 0;
	while (s[++i])
	{
		if (s[i] == c)
			flag = 1;
		else if (s[i] != c && flag == 1)
		{
			counter++;
			flag = 0;
		}
	}
	return (counter);
}

static int	count_letter_word(char const *s, char c, int pos_ini, int *pe)
{
	int	i;
	int	pos_end;

	i = pos_ini;
	while (s[i] == c)
		i++;
	pos_ini = i;
	*pe = i;
	while (s[i] != c && s[i])
	{
		i++;
	}
	pos_end = i;
	return (pos_end - pos_ini);
}

static char	**free_all(char **my_array, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)my_array[i]);
	}
	free(my_array);
	return (NULL);
}

static char	**mini_char(char const *s, char c, char **my_array, int num)
{
	int	i;
	int	j;
	int	aux;
	int	n;

	i = -1;
	j = 0;
	while (++i < num && s[j])
	{
		n = count_letter_word(s, c, j, &j);
		my_array[i] = (char *)malloc((n + 1) * sizeof(char));
		if (my_array[i] == NULL)
			return (free_all(my_array, i));
		aux = 0;
		while (aux < n)
		{
			my_array[i][aux] = s[j];
			aux++;
			j++;
		}
		my_array[i][aux] = '\0';
	}
	my_array[i] = 0;
	return (my_array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**my_array;

	i = count_words(s, c);
	my_array = (char **)malloc((i + 1) * sizeof(char *));
	if (my_array == NULL)
		return (NULL);
	return (mini_char(s, c, my_array, i));
}
