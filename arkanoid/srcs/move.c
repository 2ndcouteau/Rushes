/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 19:42:34 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/02 19:51:37 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	move_right(t_barre *barre)
{
	barre->pos.x += 0.005 * barre->speed;
	if (barre->pos.x > (1 - barre->size / MAX_BARRE_SZ))
		barre->pos.x = 1 - barre->size / MAX_BARRE_SZ;
}

void	move_left(t_barre *barre)
{
	barre->pos.x -= 0.005 * barre->speed;
	if (barre->pos.x < (-1 + barre->size / MAX_BARRE_SZ))
		barre->pos.x = -1 + barre->size / MAX_BARRE_SZ;
}
