/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:47:06 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 16:40:34 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			ft_right(t_game *game)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		line_r_shift(game, i);
		right_fusion(game, i);
		line_r_shift(game, i);
		i++;
	}
}

int				seek_nb(t_game *game, int i, int j)
{
	while (i >= 0)
	{
		if (game->plateau[j][i] != 0)
			return (i);
		i--;
	}
	return (-1);
}

void			line_r_shift(t_game *game, int j)
{
	int			i;
	int			k;

	i = 3;
	while (i >= 0)
	{
		if (game->plateau[j][i] == 0)
		{
			if ((k = seek_nb(game, i, j)) < 0)
				break ;
			else
			{
				game->plateau[j][i] = game->plateau[j][k];
				game->plateau[j][k] = 0;
			}
		}
		i--;
	}
}

void			right_fusion(t_game *game, int j)
{
	int			i;
	int			k;

	i = 3;
	while (i >= 0)
	{
		if (game->plateau[j][i] != 0)
		{
			k = i - 1;
			while (k >= 0)
			{
				if (game->plateau[j][i] == game->plateau[j][k])
				{
					game->plateau[j][i] = 2 * game->plateau[j][i];
					game->plateau[j][k] = 0;
					break ;
				}
				i--;
				k--;
			}
		}
		i--;
	}
}
