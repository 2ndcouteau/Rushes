/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_maps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 20:40:19 by qrosa             #+#    #+#             */
/*   Updated: 2015/05/03 20:48:08 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/arkanoid.h>

static void		ft_init_tab(t_map **begin_list)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (((*begin_list)->map = malloc(sizeof(int*) * (*begin_list)->h)))
	{
		while (i < (*begin_list)->h)
		{
			if (((*begin_list)->map[i] = malloc(sizeof(int) *
							(*begin_list)->w)))
			{
				while (a < (*begin_list)->w)
				{
					(*begin_list)->map[i][a] = 0;
					a++;
				}
			}
			a = 0;
			i++;
		}
	}
}

static	void	ft_split_line(char *line, t_map **begin_list, int c)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (line[i] != '\0' && a < 15)
	{
		if (line[i] >= '0' && line[i] <= '5')
		{
			if (line[i] > '0' && line[i] <= '5')
			{
				(*begin_list)->map[c][a] = (line[i] - 48);
				if (line[i] > '0' && line[i] <= '4')
					(*begin_list)->nblocks++;
			}
			a++;
		}
		i++;
	}
}

static	void	ft_convert_size(char *line, t_map **begin_list, int i)
{
	if (i == 0)
		(*begin_list)->h = ft_atoi(line);
	else
		(*begin_list)->w = ft_atoi(line);
}

void			ft_get_one_map(int fd, t_map **begin_list)
{
	char	*line;
	int		i;

	line = NULL;
	i = 0;
	(*begin_list)->nblocks = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (line != NULL && i < 2)
			ft_convert_size(line, begin_list, i);
		if (i == 2)
			ft_init_tab(begin_list);
		if (line != NULL && i > 1)
			ft_split_line(line, begin_list, i - 2);
		free(line);
		i++;
	}
}

t_map			*ft_get_maps(void)
{
	DIR				*rep;
	struct dirent	*map;
	t_map			*begin_list_maps;
	int				fd;
	char			*path;

	begin_list_maps = NULL;
	if ((rep = opendir("./levels/")))
	{
		while ((map = readdir(rep)))
		{
			path = ft_strjoin("./levels/", map->d_name);
			if ((fd = open(path, O_RDWR)) != -1)
			{
				if (begin_list_maps == NULL)
					begin_list_maps = ft_create_elem(fd);
				else
					ft_push_back(fd, begin_list_maps);
				close(fd);
			}
			free(path);
		}
		closedir(rep);
	}
	return (begin_list_maps);
}
