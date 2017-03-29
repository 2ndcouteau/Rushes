/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loose.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 20:22:56 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 21:18:32 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

int					losing_test(t_game *game)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 3 && j != 3)
				test1(game, i, j, &k);
			else if (j == 3 && i != 3)
				test2(game, i, j, &k);
			else if (i != 3 && j != 3)
				test3(game, i, j, &k);
			if (k == 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int					show_loose(t_game *game)
{
	clear();
	mvprintw(game->size.y / 2, (game->size.x / 2) - 9, "!!! YOU LOOSE !!!");
	game->win = 0;
	refresh();
	ft_sleep(3);
	return (1);
}

int					loose(t_game *game)
{
	int				i;
	int				j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->plateau[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	if (losing_test(game))
		return (show_loose(game));
	else
		return (0);
}
