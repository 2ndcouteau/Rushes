/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:25:17 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/05 17:36:05 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		ls1;
	size_t	i;

	ls1 = ft_strlen(s1);
	i = 0;
	while (i < n)
	{
		s1[i + ls1] = s2[i];
		i++;
	}
	s1[i + ls1] = '\0';
	return (s1);
}
