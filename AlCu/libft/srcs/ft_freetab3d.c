/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab3d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 14:02:29 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 14:02:36 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_freetab3d(char ***t)
{
	int		j;
	int		i;

	i = 0;
	while (t[i])
	{
		j = 0;
		while (t[i][j])
		{
			ft_memdel((void**)&t[i][j]);
			j++;
		}
		ft_memdel((void**)&t[i]);
		i++;
	}
	free(t);
	t = NULL;
}
