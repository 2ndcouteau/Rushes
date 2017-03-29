/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:00:22 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/09 16:40:06 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s0;
	size_t			i;

	s0 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s0[i] == (unsigned char)c)
			return ((void *)&s0[i]);
		i++;
	}
	return ((void *)NULL);
}
