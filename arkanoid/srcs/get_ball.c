/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_ball.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 18:01:35 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 18:02:50 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

float	get_left(t_ball *ball)
{
	return (ball->pos.x - ball->rayon);
}

float	get_right(t_ball *ball)
{
	return (ball->pos.x + ball->rayon);
}

float	get_up(t_ball *ball)
{
	return (ball->pos.y + ball->rayon);
}

float	get_down(t_ball *ball)
{
	return (ball->pos.y - ball->rayon);
}
