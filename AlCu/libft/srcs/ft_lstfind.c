/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 17:55:31 by sdahan            #+#    #+#             */
/*   Updated: 2014/12/06 17:55:32 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstfind(t_list *lst, void *data_ref)
{
	if (!lst || !data_ref)
		return (NULL);
	while (lst)
	{
		if (!ft_strcmp(lst->content, data_ref))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
