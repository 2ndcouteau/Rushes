/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:49:44 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 16:37:59 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			ft_left(t_game *game)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		line_l_shift(game, i);
		left_fusion(game, i);
		line_l_shift(game, i);
		i++;
	}
}

int				seek_nb_l(t_game *game, int i, int j)
{
	while (i < 4)
	{
		if (game->plateau[j][i] != 0)
			return (i);
		i++;
	}
	return (-1);
}

void			line_l_shift(t_game *game, int j)
{
	int			i;
	int			k;

	i = 0;
	while (i < 4)
	{
		if (game->plateau[j][i] == 0)
		{
			if ((k = seek_nb_l(game, i, j)) < 0)
				break ;
			else
			{
				game->plateau[j][i] = game->plateau[j][k];
				game->plateau[j][k] = 0;
			}
		}
		i++;
	}
}

void			left_fusion(t_game *game, int j)
{
	int			i;
	int			k;

	i = 0;
	while (i < 4)
	{
		if (game->plateau[j][i] != 0)
		{
			k = i + 1;
			while (k < 4)
			{
				if (game->plateau[j][i] == game->plateau[j][k])
				{
					game->plateau[j][i] = 2 * game->plateau[j][i];
					game->plateau[j][k] = 0;
					break ;
				}
				i++;
				k++;
			}
		}
		i++;
	}
}
