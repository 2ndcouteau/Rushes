/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:16:15 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 15:08:06 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"
#include <stdlib.h>

void		ft_init(t_env *e)
{
	e->optv = 0;
	e->nb_line = 0;
	e->alum = NULL;
	e->party = NULL;
	e->pseudo = NULL;
}

int			**ft_cpy2d(int **alum, int nb_line)
{
	int		i;
	int		**res;

	if (!(res = (int **)ft_memalloc(sizeof(int *) * nb_line)))
		ft_pferr(ERR_ALLOC);
	i = 0;
	while (i < nb_line)
	{
		if (!(res[i] = (int *)ft_memalloc(sizeof(int) * 1)))
			ft_pferr(ERR_ALLOC);
		res[i][0] = alum[i][0];
		i++;
	}
	return (res);
}

void		ft_ifreetab2d(int **t, int size)
{
	int		i;

	if (!t)
		return ;
	i = 0;
	while (i < size)
	{
		ft_memdel((void**)&t[i]);
		i++;
	}
	ft_memdel((void**)&t);
}

void		ft_destroy_env(t_env *e)
{
	if (e->pseudo)
		ft_memdel((void**)&(e->pseudo));
	ft_ifreetab2d(e->alum, e->nb_line);
	ft_init(e);
}

void		ft_gethelp(void)
{
	ft_putendl(USAGE);
	ft_putstr("Rules : The player who remove the last matches ");
	ft_putendl("on the last line loose.");
	ft_putchar('\n');
	ft_putendl("-v :\tRun party with details.");
	ft_putendl("-h :\tDisplay this help and quit.");
	exit(42);
}
