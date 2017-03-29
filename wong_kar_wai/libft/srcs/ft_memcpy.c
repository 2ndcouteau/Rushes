/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:48:30 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/07 16:55:44 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str;
	size_t				i;

	i = 0;
	str = dest;
	while (i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
