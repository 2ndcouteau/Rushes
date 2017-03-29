/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_party.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 10:23:19 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 15:18:33 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"

int			ft_getmaxmatches(int nb_inline)
{
	if (nb_inline - 3 >= 0)
		return (3);
	if (nb_inline - 2 >= 0)
		return (2);
	return (1);
}

int			ft_user_getmatches(int nb_inline, char *quest)
{
	int		i;
	char	*line;
	int		answer;

	i = 0;
	answer = 0;
	line = NULL;
	ft_putstr(quest);
	ft_putchar(' ');
	while ((answer < 1 || answer > 3) || (answer > nb_inline))
	{
		if (i > 0)
			ft_putendl("No, Try again...");
		i++;
		get_next_line(0, &line);
		if (line)
		{
			answer = ABS(ft_atoi(line));
			ft_memdel((void**)&line);
		}
		else
			answer = 0;
	}
	return (answer);
}

static int	ft_search_min(int n)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (n % 4 == 1)
			return (n);
		n--;
		i++;
	}
	return (0);
}

int			ft_ia_getmatches(t_env *e, int **alum, int nb_line, int max)
{
	int		min;
	int		etat;
	int		rem;

	if (max == 1 || (nb_line == 1 && alum[nb_line - 1][0] % 4 == 1))
		return (ft_pparty(1, NULL, GREEN));
	min = ft_search_min(alum[nb_line - 1][0]);
	if (nb_line == 1)
		return (ft_pparty(alum[nb_line - 1][0] - min, NULL, GREEN));
	etat = (alum[nb_line - 2][0] % 4 == 1) ? LOOSE : WIN;
	if (etat == WIN)
	{
		rem = alum[nb_line - 1][0] - min;
		return ((rem == 0) ? ft_pparty(1, NULL, G) : ft_pparty(rem, NULL, G));
	}
	else
	{
		rem = alum[nb_line - 1][0] - min + 1;
		if (e->optv)
			(rem > MAX_REM) ? ft_pparty(1, NULL, G) : ft_pparty(rem, NULL, G);
		if (rem > MAX_REM)
			return (1);
		return (rem);
	}
	return (0);
}

int			ft_party_ia(t_env *e, int **alum)
{
	int		turn;
	int		nb_line;
	int		max_matches;

	nb_line = e->nb_line;
	while (nb_line)
	{
		turn = IA;
		ft_pboard(alum, nb_line, e->optv);
		max_matches = ft_getmaxmatches(alum[nb_line - 1][0]);
		alum[nb_line - 1][0] -= ft_ia_getmatches(e, alum, nb_line, max_matches);
		nb_line -= (alum[nb_line - 1][0] == 0) ? 1 : 0;
		if (nb_line == 0)
			break ;
		ft_putchar('\n');
		turn = USER;
		ft_pboard(alum, nb_line, e->optv);
		alum[nb_line - 1][0] -=
			ft_user_getmatches(alum[nb_line - 1][0], Q_REMOVE);
		nb_line -= (alum[nb_line - 1][0] == 0) ? 1 : 0;
		if (nb_line == 0)
			break ;
	}
	return ((turn == IA) ? USER : IA);
}
