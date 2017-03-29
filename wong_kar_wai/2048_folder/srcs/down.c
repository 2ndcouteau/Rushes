/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 18:20:04 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 16:33:29 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			ft_down(t_game *game)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		line_d_shift(game, i);
		down_fusion(game, i);
		line_d_shift(game, i);
		i++;
	}
}

int				seek_nb_d(t_game *game, int i, int j)
{
	while (i >= 0)
	{
		if (game->plateau[i][j] != 0)
			return (i);
		i--;
	}
	return (-1);
}

void			line_d_shift(t_game *game, int j)
{
	int			i;
	int			k;

	i = 3;
	while (i >= 0)
	{
		if (game->plateau[i][j] == 0)
		{
			if ((k = seek_nb_d(game, i, j)) < 0)
				break ;
			else
			{
				game->plateau[i][j] = game->plateau[k][j];
				game->plateau[k][j] = 0;
			}
		}
		i--;
	}
}

void			down_fusion(t_game *game, int j)
{
	int			i;
	int			k;

	i = 3;
	while (i >= 0)
	{
		if (game->plateau[i][j] != 0)
		{
			k = i - 1;
			while (k >= 0)
			{
				if (game->plateau[i][j] == game->plateau[k][j])
				{
					game->plateau[i][j] = 2 * game->plateau[i][j];
					game->plateau[k][j] = 0;
					break ;
				}
				i--;
				k--;
			}
		}
		i--;
	}
}
