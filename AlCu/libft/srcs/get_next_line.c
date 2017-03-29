/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 09:55:41 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 13:06:54 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static char		*ft_(char *tmp_buff, char *buff)
{
	char		*tmp;

	tmp = ft_strjoin(tmp_buff, buff);
	ft_memdel((void**)&tmp_buff);
	return (tmp);
}

static char		*ft_init(void)
{
	char		*buff;

	if (!(buff = ft_strnew(BUFF_SIZE + 1)))
		return (NULL);
	return (buff);
}

int				ft_with_n(char **line, char **tmp, char *buff)
{
	char		*s;
	char		*tmp2;

	if ((s = ft_strchr(*tmp, '\n')) != NULL)
	{
		tmp2 = ft_strdup(*tmp);
		ft_memdel((void**)tmp);
		s = ft_strchr(tmp2, '\n');
		*s = '\0';
		*line = ft_strdup(tmp2);
		*tmp = ft_strdup(s + 1);
		ft_memdel((void**)&tmp2);
		ft_memdel((void**)&buff);
		return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	int			ret;
	char		*buff;
	static char *tmp = NULL;

	if (fd < 0 || !line || !(buff = ft_init()))
		return (-1);
	tmp = (!tmp) ? ft_strnew(0) : tmp;
	ret = 1;
	while (ret > 0)
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) == -1)
			return (-1);
		buff[ret] = '\0';
		tmp = ft_(tmp, buff);
		if (ft_with_n(line, &tmp, buff))
			return (1);
	}
	ft_memdel((void**)&buff);
	if (tmp[0])
		return (-1);
	ft_memdel((void**)&tmp);
	return (0);
}
