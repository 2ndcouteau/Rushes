/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:00:20 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 21:08:10 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	collide_vert(t_ball *ball, int dir)
{
	if (ball->dir.x * dir > 0)
		ball->dir.x *= -1;
}

void	collide_hori(t_ball *ball, int dir)
{
	if (ball->dir.y * dir > 0)
		ball->dir.y *= -1;
}

void	collide_barre(t_ball *ball, t_barre *barre)
{
	float size;

	(void)barre;
	if (ball->dir.y > 0)
		return ;
	ball->dir.y *= -1;
	size = barre->size / MAX_BARRE_SZ + 0.02;
	if (ball->pos.x > barre->pos.x - size / 2 && ball->pos.x < \
	barre->pos.x + size / 2)
	{
		if (ball->dir.y < 0.14)
			ball->dir.y *= 2;
	}
	else
	{
		if (ball->dir.x > -0.14 && ball->dir.x < 0.14)
			ball->dir.x *= 2;
	}
}

int		ball_collide_w_level(t_ball *ball, t_map *level)
{
	if (get_down(ball) < -1)
		lose_life();
	else if (get_left(ball) < -1 || get_case(get_left(ball), ball->pos.y,
				level, g_game->size) > 0)
		collide_vert(ball, -1);
	else if (get_right(ball) > 1 || get_case(get_right(ball), ball->pos.y,
				level, g_game->size) > 0)
		collide_vert(ball, 1);
	else if (get_case(ball->pos.x, get_down(ball), level, g_game->size) > 0)
		collide_hori(ball, -1);
	else if (get_up(ball) > 1 || get_case(ball->pos.x, get_up(ball),
				level, g_game->size) > 0)
		collide_hori(ball, 1);
	return (0);
}

int		ball_collide_w_barre(t_ball *ball, t_barre *barre)
{
	float size;

	size = barre->size / MAX_BARRE_SZ + 0.02;
	if (get_left(ball) > barre->pos.x + size)
		return (0);
	if (get_right(ball) < barre->pos.x - size)
		return (0);
	if (get_up(ball) < barre->pos.y - 0.02)
		return (0);
	if (get_down(ball) > barre->pos.y + 0.02)
		return (0);
	return (1);
}
