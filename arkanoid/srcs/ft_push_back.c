/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 14:11:36 by qrosa             #+#    #+#             */
/*   Updated: 2015/05/02 17:43:16 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/arkanoid.h>

void	ft_push_back(int fd, t_map *begin_list_maps)
{
	t_map *tmp_list;

	tmp_list = ft_create_elem(fd);
	while (begin_list_maps->next != NULL)
		begin_list_maps = begin_list_maps->next;
	begin_list_maps->next = tmp_list;
}
