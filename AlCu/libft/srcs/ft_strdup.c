/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:31:59 by sdahan            #+#    #+#             */
/*   Updated: 2015/06/25 15:59:46 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*s;

	i = 0;
	if (!s1)
		return (NULL);
	if ((s = (char *)malloc(sizeof(*s) * ft_strlen(s1) + 1)))
	{
		while (s1[i])
		{
			s[i] = s1[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
