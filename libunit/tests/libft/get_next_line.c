/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 20:31:35 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/29 17:06:00 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

t_lst	*ft_search_fd(int const fd, t_lst *lst)
{
	t_lst	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if (tmp->fd == fd)
		return (tmp);
	return (NULL);
}

t_lst	*ft_select(int const fd, t_lst **lst)
{
	t_lst	*new;
	t_lst	*tmp;

	if ((tmp = ft_search_fd(fd, *lst)) == NULL)
	{
		if ((new = (t_lst *)malloc(sizeof(t_lst))) == NULL)
			return (NULL);
		new->fd = (int)fd;
		new->buff = ft_strdup("");
		new->next = *lst;
		*lst = new;
	}
	else
		return (tmp);
	return (new);
}

int		ft_buff_read(char **buff, char **line)
{
	char	*tmp;
	char	*check;
	int		s;

	tmp = *line;
	if ((check = ft_strchr(*buff, '\n')) == NULL)
	{
		*line = ft_strjoin(tmp, *buff);
		ft_bzero(*buff, BUFF_SIZE);
		return (-1);
	}
	else
	{
		*line = ft_strjoin(tmp, ft_strsub(*buff, 0, (check - *buff)));
		s = 0;
		while (buff[0][s] != '\n')
			s++;
		*buff = ft_strsub(*buff, ++s, ft_strlen(*buff));
		return (0);
	}
}

int		get_next_line(int const fd, char **line)
{
	static t_lst	*lst;
	t_lst			*tmp;
	int				ret;

	if (fd == -1 || line == NULL)
		return (-1);
	if ((*line = ft_strnew(BUFF_SIZE + 1)) == NULL)
		return (-1);
	(*line)[BUFF_SIZE] = '\0';
	if ((tmp = ft_select(fd, &lst)) == NULL)
		return (-1);
	if (tmp->buff && tmp->buff[0] != '\0')
		if (ft_buff_read(&tmp->buff, &(*line)) == 0)
			return (1);
	if ((tmp->buff = ft_strnew(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while ((ret = read(fd, tmp->buff, BUFF_SIZE)) > 0)
	{
		tmp->buff[ret] = '\0';
		if (ft_buff_read(&tmp->buff, &(*line)) == 0)
			return (1);
	}
	if (ret == -1)
		return (-1);
	return (0);
}
