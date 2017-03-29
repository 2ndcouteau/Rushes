/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:18:57 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/06 12:36:03 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s0;
	size_t	i;

	if (s && f)
	{
		if ((s0 = ft_strnew(ft_strlen(s))) == NULL)
			return (NULL);
		i = 0;
		while (i < ft_strlen(s))
		{
			s0[i] = f(s[i]);
			i++;
		}
		s0[i] = '\0';
		return (s0);
	}
	return (NULL);
}
