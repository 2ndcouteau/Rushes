/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:06:09 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 16:00:19 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	if ((new_s = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			new_s[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (new_s);
}
