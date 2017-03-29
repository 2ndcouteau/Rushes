/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 17:58:47 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 16:38:16 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

void			ft_up(t_game *game)
{
	int			i;

	i = 0;
	while (i < 4)
	{
		line_u_shift(game, i);
		up_fusion(game, i);
		line_u_shift(game, i);
		i++;
	}
}

int				seek_nb_u(t_game *game, int i, int j)
{
	while (i < 4)
	{
		if (game->plateau[i][j] != 0)
			return (i);
		i++;
	}
	return (-1);
}

void			line_u_shift(t_game *game, int j)
{
	int			i;
	int			k;

	i = 0;
	while (i < 4)
	{
		if (game->plateau[i][j] == 0)
		{
			if ((k = seek_nb_u(game, i, j)) < 0)
				break ;
			else
			{
				game->plateau[i][j] = game->plateau[k][j];
				game->plateau[k][j] = 0;
			}
		}
		i++;
	}
}

void			up_fusion(t_game *game, int j)
{
	int			i;
	int			k;

	i = 0;
	while (i < 4)
	{
		if (game->plateau[i][j] != 0)
		{
			k = i + 1;
			while (k < 4)
			{
				if (game->plateau[i][j] == game->plateau[k][j])
				{
					game->plateau[i][j] = 2 * game->plateau[i][j];
					game->plateau[k][j] = 0;
					break ;
				}
				i++;
				k++;
			}
		}
		i++;
	}
}
