/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 14:58:20 by sdahan            #+#    #+#             */
/*   Updated: 2015/06/22 15:21:37 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcharchr(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	if (!s2)
		return (0);
	while (s2[i])
	{
		if (ft_strchr(s1, s2[i]))
			return (1);
		i++;
	}
	return (0);
}
