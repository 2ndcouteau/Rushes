/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deuxmille.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 19:25:51 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 19:32:03 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			set_basics(t_game *game)
{
	random_set(game);
}

void			little_win(t_game *game)
{
	clear();
	mvprintw(game->size.y / 2, (game->size.x / 2) - 8, "win too little");
	refresh();
	ft_sleep(3);
}

void			in_game(t_game *game)
{
	int			i;

	set_basics(game);
	getmaxyx(stdscr, game->size.y, game->size.x);
	while (42)
	{
		if (game->size.y < 9)
		{
			little_win(game);
			break ;
		}
		victory(game);
		if (loose(game))
			break ;
		show_tab(game);
		i = getch();
		if (i == 27)
			break ;
		else
			key_hook(game, i);
		if (i == 410)
			getmaxyx(stdscr, game->size.y, game->size.x);
	}
}

void			ft_2048(t_game *game)
{
	int			i;

	getmaxyx(stdscr, game->size.y, game->size.x);
	while (1)
	{
		if (game->size.y < 5 || game->size.x < 41)
			little_win(game);
		menu(game);
		i = getch();
		if (i == 27)
			break ;
		if (i == 49)
			in_game(game);
		if (i == 410)
			getmaxyx(stdscr, game->size.y, game->size.x);
	}
}
