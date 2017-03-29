/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 12:54:54 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 20:50:48 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

int		get_case(float x, float y, t_map *map, float inc[2])
{
	int	i;
	int	j;

	i = map->h - 1 - (int)((y + 1) / inc[1]);
	j = (int)((x + 1) / inc[0]);
	if (i < 0 || i > map->h - 1 || j < 0 || j > map->w - 1)
		return (0);
	if (map->map[i][j] > 0 && map->map[i][j] != 5)
	{
		if ((map->map[i][j] -= 1) == 0)
			map->nblocks--;
		g_game->score++;
		return (map->map[i][j] + 1);
	}
	return (map->map[i][j]);
}

void	lose_life(void)
{
	g_game->barre->life -= 1;
	if (g_game->barre->life == 0)
		ft_error("You lose", NULL);
	g_game->ball->dir = vect(1, 1);
	g_game->ball->pos = vect(0, -0.8);
	g_game->barre->pos = vect(0, -0.9);
}

void	next_level(void)
{
	get_level(g_game->actual_level + 1);
	g_game->ball->dir = vect(1, 1);
	g_game->ball->pos = vect(0, -0.8);
	g_game->barre->pos = vect(0, -0.9);
}

void	norm_dir(t_ball *ball)
{
	float mag;

	mag = ft_sqrt(ball->dir.x * ball->dir.x + ball->dir.y * ball->dir.y);
	ball->dir.x /= mag;
	ball->dir.y /= mag;
}

void	update(t_ball *ball)
{
	norm_dir(ball);
	ball->pos.x += ball->speed / 50 * ball->dir.x;
	ball->pos.y += ball->speed / 50 * ball->dir.y;
	ball_collide_w_level(ball, g_game->this_level);
	if (ball_collide_w_barre(ball, g_game->barre) == 1)
		collide_barre(ball, g_game->barre);
	if (g_game->this_level->nblocks == 0)
		next_level();
}
