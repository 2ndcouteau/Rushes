/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/01 22:37:40 by qrosa             #+#    #+#             */
/*   Updated: 2015/05/03 18:50:09 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/arkanoid.h>

t_map		*ft_create_elem(int fd)
{
	t_map	*elem;

	if (!(elem = malloc(sizeof(*elem))))
		return (NULL);
	if (fd > -1)
	{
		ft_get_one_map(fd, &elem);
		elem->next = NULL;
	}
	else
	{
		elem->map = NULL;
		elem->nblocks = 0;
		elem->next = NULL;
	}
	return (elem);
}
