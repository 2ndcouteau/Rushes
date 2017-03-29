/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 17:55:56 by sdahan            #+#    #+#             */
/*   Updated: 2015/07/26 13:21:04 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list					*ft_lstat(t_list *lst, unsigned int nb)
{
	unsigned int		i;

	i = 0;
	while (lst)
	{
		i++;
		if (i == nb)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
