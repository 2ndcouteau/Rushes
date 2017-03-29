/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:59:44 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 16:03:54 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			menu(t_game *game)
{
	clear();
	mobil_title(game);
}

void			mobil_title(t_game *game)
{
	t_coor		origin;

	origin.y = (game->size.y - 1) / 3;
	origin.x = ((game->size.x - 1) / 2) - 2;
	extern_grid(game);
	mvprintw(origin.y, origin.x, "2048");
	origin.y = (game->size.y - 1) / 2;
	origin.x = ((game->size.x - 1) / 4);
	mvprintw(origin.y, origin.x, "1) Start game");
	origin.x += (2 * ((game->size.x - 1) / 4)) - 5;
	mvprintw(origin.y, origin.x, "Esc) Exit");
}
