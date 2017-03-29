/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:46:53 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 16:54:01 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (((void*)s) + i);
		i++;
	}
	return (0);
}
