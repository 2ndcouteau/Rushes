/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:15:49 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 14:14:47 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*last;

	last = NULL;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == (char)c)
			last = tmp;
		tmp++;
	}
	if (*tmp == (char)c)
		return (tmp);
	return (last);
}
