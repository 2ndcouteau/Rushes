/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:24:37 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/13 23:11:26 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (i == n)
				return (1);
			if (s1[i] == s2[i])
				i++;
			else
				return (0);
		}
	}
	return (1);
}
