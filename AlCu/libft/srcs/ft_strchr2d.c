/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 00:42:45 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/21 00:53:07 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr2d(char **s, int c)
{
	int		i;
	int		j;

	if (!*s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == c)
				return (&s[i][j]);
			j++;
		}
		i++;
	}
	return (NULL);
}
