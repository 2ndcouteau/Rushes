/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:16:14 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 11:39:06 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (!(size))
		return (NULL);
	if ((p = (void *)malloc(size * sizeof(*p))))
	{
		while ((i++) < size)
			((unsigned char*)p)[i] = 0;
		return (p);
	}
	return (NULL);
}
