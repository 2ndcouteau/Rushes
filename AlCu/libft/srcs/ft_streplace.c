/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streplace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 14:04:39 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/16 20:32:43 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_streplace(char *s, char old, char new)
{
	int			i;

	i = 0;
	while (s[i])
	{
		if (s[i] == old)
			s[i] = new;
		i++;
	}
}