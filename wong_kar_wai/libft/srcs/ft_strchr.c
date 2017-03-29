/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:06:05 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/08 17:27:23 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *str, int c)
{
	int			i;
	char		*dst;

	i = 0;
	dst = (char*)str;
	while (dst[i] != c)
	{
		if (dst[i] == '\0')
			return (NULL);
		i++;
	}
	return (dst + i);
}
