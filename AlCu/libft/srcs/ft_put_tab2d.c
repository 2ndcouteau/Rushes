/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tab2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:53:55 by sdahan            #+#    #+#             */
/*   Updated: 2015/10/14 19:45:43 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_put_tab2d(char **t)
{
	int		i;

	if (!t)
		return ;
	i = 0;
	while (t[i])
	{
		ft_putstr(t[i]);
		ft_putchar('\n');
		i++;
	}
}