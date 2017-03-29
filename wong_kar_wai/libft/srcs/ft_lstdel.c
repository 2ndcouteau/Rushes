/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:24:21 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/07 12:25:46 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*list;
	t_list		*temp;

	list = *alst;
	if (list && del)
	{
		while (list)
		{
			temp = list->next;
			del(list->content, list->content_size);
			free(list);
			list = temp;
		}
		*alst = NULL;
	}
}
