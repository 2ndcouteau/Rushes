/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:45:11 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:45:14 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;

	if (s2[0] == '\0' || s2 == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i])
	{
		j = i;
		k = 0;
		while (s1[j] && s1[j] == s2[k])
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
