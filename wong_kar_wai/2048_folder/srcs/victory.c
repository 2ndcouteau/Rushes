/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 19:48:27 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 19:53:55 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				show_victory(t_game *game)
{
	clear();
	mvprintw(game->size.y / 2, (game->size.x / 2) - 8, "!!! YOU WIN !!!");
	refresh();
	ft_sleep(3);
}

int					victory(t_game *game)
{
	int				i;
	int				j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->plateau[i][j] == game->win_value)
			{
				if (game->win != 1)
					show_victory(game);
				game->win = 1;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
