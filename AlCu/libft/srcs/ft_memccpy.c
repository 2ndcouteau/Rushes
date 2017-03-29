/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 09:50:52 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/09 15:47:40 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*psrc;
	unsigned char		*pdst;

	if (!dst || !src || n == 0 || c <= 0)
		return (NULL);
	psrc = (const unsigned char*)src;
	pdst = (unsigned char*)dst;
	while (n)
	{
		if ((*pdst++ = *psrc++) == c)
			return (pdst);
		n--;
	}
	return (NULL);
}
