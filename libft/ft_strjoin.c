/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:45:49 by marvin            #+#    #+#             */
/*   Updated: 2024/02/22 19:36:25 by marianadovh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_;
	int		s2_;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	s1_ = ft_strlen(s1);
	s2_ = ft_strlen(s2);
	i = 0;
	str = malloc((s1_ + s2_ + 1));
	if (!str)
		return (NULL);
	while (s1_--)
	{
		str[i] = s1[i];
		i++;
	}
	s1_ = i;
	i = 0;
	while (s2_--)
		str[s1_++] = s2[i++];
	str[s1_] = '\0';
	return (str);
}
