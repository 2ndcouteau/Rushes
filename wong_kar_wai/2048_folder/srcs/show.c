/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:39:17 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 20:20:56 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				extern_grid(t_game *game)
{
	t_coor			origin;

	origin.x = 0;
	origin.y = 1;
	ft_vertical(origin, game->size.y - 2);
	origin.x = game->size.x - 1;
	ft_vertical(origin, game->size.y - 2);
	origin.x = 1;
	origin.y = 0;
	ft_horizontal(origin, game->size.x - 2);
	origin.y = game->size.y - 1;
	ft_horizontal(origin, game->size.x - 2);
	origin.x = 0;
	origin.y = 0;
	mvprintw(origin.y, origin.x, "*");
	origin.x = 0;
	origin.y = game->size.y - 1;
	mvprintw(origin.y, origin.x, "*");
	origin.x = game->size.x - 1;
	origin.y = 0;
	mvprintw(origin.y, origin.x, "*");
	origin.y = game->size.y - 1;
	mvprintw(origin.y, origin.x, "*");
}

void				inside_ver(t_game *game)
{
	t_coor			origin;
	int				i;

	i = 0;
	origin.x = (game->size.x - 1) / 4;
	origin.y = 1;
	while (i <= 2)
	{
		ft_vertical(origin, game->size.y - 2);
		origin.x += (game->size.x - 1) / 4;
		i++;
	}
}

void				inside_hor(t_game *game)
{
	t_coor			origin;
	int				i;

	i = 0;
	origin.x = 1;
	origin.y = (game->size.y - 1) / 4;
	while (i <= 2)
	{
		ft_horizontal(origin, game->size.x - 2);
		origin.y += (game->size.y - 1) / 4;
		i++;
	}
}

void				print_nb(t_game *game,\
							t_coor count, t_coor origin)
{
	char			*str;

	str = ft_itoa(game->plateau[count.x][count.y]);
	mvprintw(origin.y, origin.x, str);
	free(str);
}

void				print_tab(t_game *game)
{
	t_coor			origin;
	t_coor			count;

	count.x = 0;
	origin.y = (game->size.y - 1) / 8;
	while (count.x < 4)
	{
		origin.x = (game->size.x - 1) / 8;
		count.y = 0;
		while (count.y < 4)
		{
			attron(COLOR_PAIR(set_color(count, game)));
			if (game->plateau[count.x][count.y] != 0)
				print_nb(game, count, origin);
			attroff(COLOR_PAIR(set_color(count, game)));
			origin.x += (game->size.x - 1) / 4;
			count.y++;
		}
		origin.y += (game->size.y - 1) / 4;
		count.x++;
	}
}
