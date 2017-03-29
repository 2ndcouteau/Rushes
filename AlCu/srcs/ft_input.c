/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:17:07 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 14:01:52 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"
#include <fcntl.h>
#include <unistd.h>

static int	ft_open(char *path)
{
	int		fd;

	if ((fd = open(path, O_RDONLY)) == -1)
		return (ft_perr(ERROR));
	return (fd);
}

static int	ft_get_nbline(char *path)
{
	int		y;
	int		fd;
	int		ret;
	char	*line;

	if ((fd = ft_open(path)) == -1)
		return (-1);
	y = 0;
	line = NULL;
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		if (!ft_check_line(line))
		{
			ft_memdel((void**)&line);
			return (ft_perr(ERROR));
		}
		ft_memdel((void**)&line);
		y++;
	}
	close(fd);
	if (ret == -1 || y == 0)
		return (ft_perr(ERROR));
	return (y);
}

int			ft_save_fboard(t_env *e, char *path)
{
	int		i;
	int		fd;
	char	*line;

	if ((e->nb_line = ft_get_nbline(path)) == -1 || e->nb_line == 0)
		return (-1);
	if (!(e->alum = (int **)ft_memalloc(sizeof(int *) * e->nb_line)))
		ft_pferr(ERR_ALLOC);
	if ((fd = ft_open(path)) == -1)
		return (-1);
	i = 0;
	line = NULL;
	while (get_next_line(fd, &line) > 0)
	{
		if (!(e->alum[i] = (int *)ft_memalloc(sizeof(int) * 1)))
			ft_pferr(ERR_ALLOC);
		e->alum[i][0] = ft_atoi(line);
		i++;
		ft_memdel((void**)&line);
	}
	close(fd);
	return (0);
}

int			ft_save_0board(t_env *e)
{
	int		i;
	int		ret;
	char	*line;

	if (!(e->alum = (int **)ft_memalloc(sizeof(int *) * DFLT_ALLOC)))
		ft_pferr(ERR_ALLOC);
	i = 0;
	line = NULL;
	while ((ret = get_next_line(0, &line)) > 0)
	{
		if (!line[0])
			break ;
		if (!ft_check_line(line))
		{
			ft_memdel((void**)&line);
			return (ft_perr(ERROR));
		}
		if (!(e->alum[i] = (int *)ft_memalloc(sizeof(int) * 1)))
			ft_pferr(ERR_ALLOC);
		e->alum[i++][0] = ft_atoi(line);
		ft_memdel((void**)&line);
		(e->nb_line)++;
	}
	ft_memdel((void**)&line);
	return ((ret == -1 || e->nb_line == 0) ? ft_perr(ERROR) : 0);
}
