/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:31:06 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/14 20:12:34 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	if (s1 && s2)
	{
		i = 0;
		while ((unsigned char)s1[i] == (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] == '\0')
				return (0);
			i++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
