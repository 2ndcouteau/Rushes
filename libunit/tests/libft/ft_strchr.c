/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 22:03:27 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/09 16:56:44 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*s0;

	s0 = (char *)s;
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		if (s0[i] == (char)c)
			return ((char *)&s0[i]);
		i++;
	}
	return (NULL);
}
