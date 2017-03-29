/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 04:03:02 by pguillot          #+#    #+#             */
/*   Updated: 2015/03/16 01:02:05 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*new;

	new_lst = NULL;
	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	while (lst)
	{
		new = f(lst);
		ft_lstaddend(&new_lst, new);
		lst = lst->next;
	}
	return (new_lst);
}
