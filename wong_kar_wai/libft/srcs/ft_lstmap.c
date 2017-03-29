/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:54:01 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/07 16:43:25 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_list;
	t_list		*begin_list;
	t_list		*temp;

	if (f && lst)
	{
		temp = f(lst);
		if ((new_list = ft_lstnew(temp->content, temp->content_size)))
		{
			begin_list = new_list;
			while (lst->next)
			{
				temp = f(lst->next);
				if (!(new_list->next = ft_lstnew(temp->content,\
										temp->content_size)))
					return (0);
				lst = lst->next;
				new_list = new_list->next;
			}
		}
	}
	return (begin_list);
}
