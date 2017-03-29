/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_party_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 11:38:09 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 15:12:00 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"

int			ft_pparty(int ret, char *pseudo, char *color)
{
	ft_putstr(color);
	(pseudo) ? ft_putstr(pseudo) : ft_putstr(IA_NAME);
	ft_putstr(" remove ");
	ft_putnbr(ret);
	ft_putendl(" matches");
	ft_putstr(DEFAULT);
	return (ret);
}

char		*ft_getanswer(char *quest)
{
	int		i;
	char	*answer;

	i = 0;
	answer = NULL;
	ft_putstr(quest);
	ft_putchar(' ');
	get_next_line(0, &answer);
	return (answer);
}

void		ft_choice_player(t_env *e)
{
	int		i;
	char	*line;
	int		answer;

	i = 0;
	answer = 0;
	line = NULL;
	ft_putstr(BLUE);
	ft_putendl("Do you want to be the first player ? [yes = 1 and no = 2] ");
	ft_putstr(DEFAULT);
	while ((answer < 1 || answer > 2))
	{
		if (i > 0)
			ft_putendl("Your choice is invalid, retry please.");
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
	e->party = (answer == 1) ? ft_party_user : ft_party_ia;
}

int			ft_party_user(t_env *e, int **alum)
{
	int		turn;
	int		nb_line;
	int		max_matches;

	nb_line = e->nb_line;
	while (nb_line)
	{
		turn = USER;
		ft_pboard(alum, nb_line, e->optv);
		alum[nb_line - 1][0] -=
			ft_user_getmatches(alum[nb_line - 1][0], Q_REMOVE);
		nb_line -= (alum[nb_line - 1][0] == 0) ? 1 : 0;
		if (nb_line == 0)
			break ;
		ft_putchar('\n');
		turn = IA;
		ft_pboard(alum, nb_line, e->optv);
		max_matches = ft_getmaxmatches(alum[nb_line - 1][0]);
		alum[nb_line - 1][0] -= ft_ia_getmatches(e, alum, nb_line, max_matches);
		nb_line -= (alum[nb_line - 1][0] == 0) ? 1 : 0;
		if (nb_line == 0)
			break ;
	}
	return ((turn == IA) ? USER : IA);
}
