/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 13:36:30 by sdahan            #+#    #+#             */
/*   Updated: 2015/11/21 15:53:18 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strrchri(const char *s, int c)
{
	int		i;
	int		last_index;

	i = 0;
	last_index = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_index = i;
		i++;
	}
	return (last_index);
}
