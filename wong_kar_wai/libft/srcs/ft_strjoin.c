/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:37:47 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 19:22:41 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	if ((str = (char*)malloc((ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1) \
							* sizeof(*str))))
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
			str[i++] = s2[j++];
		str[i] = '\0';
		return (str);
	}
	return (0);
}
