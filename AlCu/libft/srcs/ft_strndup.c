/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:44:16 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:44:18 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strndup(const char *s1, int n)
{
	int		i;
	char	*s;

	i = 0;
	s = NULL;
	if ((s = (char *)malloc(sizeof(*s) * ft_strlen(s1) + 1)))
	{
		while (s1[i] && i < n)
		{
			s[i] = s1[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
