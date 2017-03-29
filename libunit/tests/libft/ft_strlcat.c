/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 18:47:47 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/12 16:12:42 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	ldst;
	size_t	lsrc;
	int		i;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	i = n - 1 - ldst;
	if (n <= ldst)
		return (lsrc + n);
	while (*dst)
		dst++;
	while (*src && i)
	{
		*dst++ = *src++;
		i--;
	}
	*dst = '\0';
	return (ldst + lsrc);
}
