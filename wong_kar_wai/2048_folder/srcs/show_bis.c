/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_bis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:15:26 by acouliba          #+#    #+#             */
/*   Updated: 2015/02/28 21:24:23 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				show_tab(t_game *game)
{
	clear();
	extern_grid(game);
	inside_ver(game);
	inside_hor(game);
	print_tab(game);
	refresh();
}

void				ft_vertical(t_coor origin, size_t size)
{
	int				i;

	i = size + origin.y;
	while (origin.y < i)
	{
		mvprintw(origin.y, origin.x, "|");
		origin.y++;
	}
}

void				ft_horizontal(t_coor origin, size_t size)
{
	int				i;

	i = size + origin.x;
	while (origin.x < i)
	{
		mvprintw(origin.y, origin.x, "-");
		origin.x++;
	}
}
