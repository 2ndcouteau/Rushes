/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:28:14 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 15:12:44 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str;

	if ((str = (unsigned char*)malloc((n + 1) * sizeof(*src))))
	{
		str = ft_memcpy(str, src, n);
		dst = ft_memcpy(dst, str, n);
		return ((void*)dst);
	}
	return (0);
}
