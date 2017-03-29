/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 21:03:55 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 20:55:32 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				print_error(char *str)
{
	int				i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int					main(void)
{
	t_game			game;
	t_const			win;

	win = WIN_VALUE;
	if ((win & (win - 1)) == 0 && win >= 8)
	{
		game.win_value = win;
		initscr();
		noecho();
		curs_set(FALSE);
		keypad(stdscr, TRUE);
		init_numbercolor();
		ft_2048(&game);
		endwin();
	}
	else
		print_error("Bad win value!!\n");
	return (0);
}
