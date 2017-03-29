/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:08:06 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 15:20:15 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"

static void	ft_alum(t_env *e)
{
	int		win;
	int		game;
	int		**tmp;
	char	*answer;

	game = YES;
	e->pseudo = ft_getanswer(Q_PSEUDO);
	if (!e->pseudo)
		ft_putchar('\n');
	e->pseudo = (e->pseudo) ? e->pseudo : ft_strdup(DF_NAME);
	answer = NULL;
	while (game)
	{
		ft_choice_player(e);
		tmp = ft_cpy2d(e->alum, e->nb_line);
		win = e->party(e, tmp);
		ft_putchar('\n');
		(win == IA) ? ft_pcolor(IA_NAME, "win !", GREEN) :
			ft_pcolor(e->pseudo, "win !", GREEN);
		answer = ft_getanswer(Q_AGAIN);
		if (ft_strequ(answer, "no"))
			game = NO;
		ft_memdel((void**)&answer);
		ft_ifreetab2d(tmp, e->nb_line);
	}
}

int			main(int ac, char **av)
{
	int		i;
	t_env	e;

	ft_init(&e);
	if (ac > 1)
	{
		i = ft_check_arg(&e, av);
		while (av[++i])
		{
			if (!ft_save_fboard(&e, av[i]))
				ft_alum(&e);
		}
	}
	else
	{
		if (!ft_save_0board(&e))
			ft_alum(&e);
	}
	ft_destroy_env(&e);
	return (0);
}
