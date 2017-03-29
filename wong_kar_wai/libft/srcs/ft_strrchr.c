/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 19:37:58 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 15:16:49 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	*dst;

	dst = (char*)s;
	i = ft_strlen(dst);
	while (dst[i] != c)
	{
		if (i == -1)
			return (NULL);
		i -= 1;
	}
	return (dst + i);
}
