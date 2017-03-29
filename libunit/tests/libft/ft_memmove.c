/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 22:18:58 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/10 20:04:30 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	s1 += n;
	s2 += n;
	while (n--)
		*--s1 = *--s2;
	return (s1);
}
