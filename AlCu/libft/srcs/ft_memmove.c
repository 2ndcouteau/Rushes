/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:58:17 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:58:19 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*copy;

	copy = (char *)malloc(sizeof(*copy) * len);
	copy = ft_strncpy(copy, src, len);
	dst = (void*)ft_strncpy(dst, copy, len);
	ft_memdel((void**)&copy);
	return (dst);
}
