/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:28:38 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/09 17:22:18 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i1;
	int		i2;

	if (*s2 == '\0')
		return ((char *)s1);
	i1 = 0;
	while (s1[i1] != '\0')
	{
		i2 = 0;
		if (s2[i2] == s1[i1])
		{
			while (s2[i2] == s1[i1 + i2] && s1[i1 + i2] != '\0')
			{
				if (s2[i2 + 1] == '\0')
					return ((char *)&s1[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (NULL);
}
