/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:14:19 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/14 20:54:27 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s0;

	if (s && f)
	{
		s0 = ft_strnew(ft_strlen(s));
		if (s0)
		{
			i = 0;
			while (i < ft_strlen(s))
			{
				s0[i] = f(i, s[i]);
				i++;
			}
			s0[i] = '\0';
			return (s0);
		}
	}
	return (NULL);
}
