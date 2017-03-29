/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:52:26 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 14:01:38 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"

static int	ft_isstrdigit(char *line)
{
	int		i;
	int		nb;

	i = 0;
	while (line[i])
	{
		if (!(ft_isdigit(line[i])))
			return (0);
		i++;
	}
	nb = ft_atoi(line);
	if (nb < 1 || nb > MAX_MATCHES)
		return (0);
	return (1);
}

static int	ft_isempty(char *line)
{
	if (!line[0])
		return (1);
	return (0);
}

int			ft_check_line(char *line)
{
	if (ft_isempty(line))
		return (0);
	if (!ft_isstrdigit(line))
		return (0);
	return (1);
}

int			ft_check_arg(t_env *e, char **av)
{
	int		i;

	i = 0;
	while (av[++i] && av[i][0] == '-')
	{
		if (av[i][1] == 'v' && !av[i][2])
			e->optv = 1;
		else if (av[i][1] == 'h' && !av[i][2])
			ft_gethelp();
		else
			ft_pferr(USAGE);
	}
	return (i - 1);
}
