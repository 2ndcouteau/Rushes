/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:24:36 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/09 17:23:31 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i1;
	size_t	i2;

	if (*s2 == '\0')
		return ((char *)s1);
	i1 = 0;
	while (s1[i1] != '\0' && i1 < n)
	{
		i2 = 0;
		if (s2[i2] == s1[i1])
		{
			while (s2[i2] == s1[i1 + i2] && s1[i1 + i2] != '\0')
			{
				if (i1 + i2 >= n)
					return (NULL);
				if (s2[i2 + 1] == '\0')
					return ((char *)&s1[i1]);
				i2++;
			}
		}
		i1++;
	}
	return (NULL);
}
