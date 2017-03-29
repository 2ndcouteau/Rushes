/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 19:37:35 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 15:16:21 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t e;

	i = 0;
	e = 0;
	if (s2[0] == '\0' || s2 == 0)
		return ((char *)s1);
	if (ft_strlen(s2) > n)
		return (0);
	while (s1[i] != '\0' && i < n)
	{
		e = 0;
		while (s1[i] == s2[e] && i < n)
		{
			e++;
			i++;
			if (e == ft_strlen(s2))
				return ((char*)s1 + (i - ft_strlen(s2)));
		}
		i++;
	}
	return (NULL);
}
