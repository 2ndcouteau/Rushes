/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:30:09 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/07 14:39:33 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0 || (!s1 && !s2))
		return (0);
	if (!s2)
		return (-1);
	if (!s1)
		return (1);
	while (--n && *s1 && *s1 == *s2)
	{
		s2++;
		s1++;
	}
	return (*(unsigned char *)s1 - (*(unsigned char *)s2));
}
