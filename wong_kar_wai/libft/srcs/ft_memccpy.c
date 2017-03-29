/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:03:14 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 19:20:49 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dest, const void *src, int c\
									, size_t n)
{
	unsigned char		p;
	unsigned char		*dst;
	unsigned char		*str;
	size_t				i;

	i = 0;
	dst = (unsigned char*)dest;
	str = (unsigned char*)src;
	p = (unsigned char)c;
	while (i < n)
	{
		if ((*dst++ = *str++) == p)
			return (dst);
		i++;
	}
	return (NULL);
}
