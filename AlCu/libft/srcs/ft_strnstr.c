/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:22:52 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 11:23:04 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && j < n)
	{
		j = i;
		k = 0;
		while (s1[j] && s2[k] && s1[j] == s2[k] && j < n)
		{
			j++;
			k++;
		}
		if (s2[k] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
