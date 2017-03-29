/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 15:59:48 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/01 18:28:23 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game_2048.h"

int		comp_tab(t_game *game)
{
	int j;
	int i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (game->plateau_test[i][j] != game->plateau[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	tab_cpy(t_game *game)
{
	int j;
	int i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			game->plateau_test[i][j] = game->plateau[i][j];
			j++;
		}
		i++;
	}
}
