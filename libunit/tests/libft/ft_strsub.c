/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:52:51 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/14 21:21:25 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		str = ft_strnew(len + 1);
		if (str)
		{
			i = 0;
			while (i < len && s[start + i] != '\0')
			{
				str[i] = (char)s[start + i];
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
