/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 17:42:26 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 19:00:03 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			init_numbercolor(void)
{
	start_color();
	init_pair(0, COLOR_WHITE, COLOR_BLACK);
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_YELLOW, COLOR_BLACK);
	init_pair(5, COLOR_RED, COLOR_BLACK);
}

int				set_color(t_coor count, t_game *game)
{
	if (game->plateau[count.x][count.y] <= 4)
		return (0);
	else if (game->plateau[count.x][count.y] <= 16)
		return (1);
	else if (game->plateau[count.x][count.y] <= 64)
		return (2);
	else if (game->plateau[count.x][count.y] <= 256)
		return (3);
	if (game->plateau[count.x][count.y] <= 1024)
		return (4);
	if (game->plateau[count.x][count.y] <= 4096)
		return (5);
	return (game->plateau[count.x][count.y]);
}
