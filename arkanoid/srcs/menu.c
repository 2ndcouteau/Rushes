/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 12:40:59 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 15:33:31 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	get_level(int nb)
{
	t_map	*tmp;

	g_game->actual_level = nb;
	tmp = g_game->all_level;
	while (tmp != NULL && nb != 1)
	{
		tmp = tmp->next;
		nb--;
	}
	if (tmp == NULL)
		ft_error("YOU WIN", NULL);
	else
		g_game->this_level = tmp;
}
