/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:04:23 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 11:10:05 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	max;
	size_t	l;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	max = i + ft_strlen(src);
	if (i != size)
	{
		l = (size - i - 1);
		while (src[j] && j < l)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (max);
}
