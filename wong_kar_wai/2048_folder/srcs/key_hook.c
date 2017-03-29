/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:05:50 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 18:30:42 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				key_hook(t_game *game, int keycode)
{
	tab_cpy(game);
	if (keycode == 258)
	{
		ft_down(game);
		if ((comp_tab(game)))
			set_random_nb(game);
	}
	else if (keycode == 259)
	{
		ft_up(game);
		if ((comp_tab(game)))
			set_random_nb(game);
	}
	else if (keycode == 260)
	{
		ft_left(game);
		if ((comp_tab(game)))
			set_random_nb(game);
	}
	else if (keycode == 261)
	{
		ft_right(game);
		if ((comp_tab(game)))
			set_random_nb(game);
	}
}
