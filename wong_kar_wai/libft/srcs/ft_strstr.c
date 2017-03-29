/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:01:13 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 15:17:38 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strstr(const char *s1, const char *s2)
{
	size_t			i;
	size_t			count;

	i = 0;
	count = 0;
	if (s2[0] == '\0' || s2 == 0)
		return ((char*)s1);
	while (s1[i] != '\0')
	{
		count = 0;
		while (s1[i] == s2[count])
		{
			count++;
			i++;
			if (count == ft_strlen(s2))
				return ((char*)s1 + (i - (ft_strlen(s2))));
		}
		i++;
	}
	return (NULL);
}
