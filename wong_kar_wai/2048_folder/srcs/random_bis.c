/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 16:28:55 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 17:37:17 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

int					nb_zero(t_game *game)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->plateau[i][j] == 0)
				k++;
			j++;
		}
		i++;
	}
	return (k);
}

void				random_it(t_game *game, int random)
{
	int				i;
	int				j;
	int				k;

	i = 0;
	k = 0;
	srand((unsigned int)time(NULL));
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (k == (random) && game->plateau[i][j] == 0)
			{
				game->plateau[i][j] = ((rand() % 2) + 1) * 2;
				k++;
			}
			if (game->plateau[i][j] == 0)
				k++;
			j++;
		}
		i++;
	}
}

void				set_random_nb(t_game *game)
{
	int				i;
	int				random;

	if ((i = nb_zero(game)) > 0)
	{
		srand((unsigned int)time(NULL));
		random = rand() % i;
		random_it(game, random);
	}
}
