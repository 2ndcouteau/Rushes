/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:45:29 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:45:33 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strfdup(const char *s1, int (*filtre)(int))
{
	int		i;
	char	*s;

	i = 0;
	s = NULL;
	if ((s = (char *)malloc(sizeof(*s) * ft_strlen(s1) + 1)))
	{
		while (s1[i])
		{
			s[i] = filtre(s1[i]);
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
