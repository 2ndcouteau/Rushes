/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:49:21 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/12 16:11:44 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (size == 0)
		return ((void *)NULL);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	ft_bzero(str, size);
	return ((void *)str);
}
