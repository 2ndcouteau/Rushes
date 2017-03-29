/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:39:10 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 15:55:53 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	new_s = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		new_s[i] = (*f)(s[i]);
		i++;
	}
	return (new_s);
}
