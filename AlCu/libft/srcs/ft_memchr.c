/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:10:34 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 10:16:38 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pstr;

	pstr = (unsigned char *)s;
	while (n--)
	{
		if (*pstr == (unsigned char)c)
			return ((void*)pstr);
		pstr++;
	}
	return (NULL);
}
