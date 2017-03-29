/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:17:13 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/09 10:02:11 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ps1;
	const unsigned char	*ps2;

	if (!s1 || !s2)
		return (0);
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ps1++ != *ps2++)
			return ((unsigned char)*--ps1 - (unsigned char)*--ps2);
	}
	return (0);
}
