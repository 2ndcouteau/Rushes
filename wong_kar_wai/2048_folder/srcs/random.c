/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:18:06 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 19:55:30 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void				random_set(t_game *game)
{
	set_zeros(game);
	set_random_nb(game);
	set_random_nb(game);
}

void				set_zeros(t_game *game)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			game->plateau[i][j] = 0;
			j++;
		}
		i++;
	}
}
