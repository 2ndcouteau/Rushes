/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loose_bis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:43:25 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 19:02:08 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			test1(t_game *game, int i, int j, int *k)
{
	if (game->plateau[i][j] == game->plateau[i][j + 1])
		*k = 1;
}

void			test2(t_game *game, int i, int j, int *k)
{
	if (game->plateau[i][j] == game->plateau[i + 1][j])
		*k = 1;
}

void			test3(t_game *game, int i, int j, int *k)
{
	if (game->plateau[i][j] == game->plateau[i][j + 1] || \
		game->plateau[i][j] == game->plateau[i + 1][j])
		*k = 1;
}
