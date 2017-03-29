/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 10:00:46 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/09 10:00:47 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*r;
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !f)
		return (NULL);
	tmp2 = f(lst);
	if (!(r = ft_lstnew(tmp2->content, tmp2->content_size)))
		return (NULL);
	tmp = r;
	lst = lst->next;
	while (lst)
	{
		tmp2 = f(lst);
		if (!(tmp->next = ft_lstnew(tmp2->content, tmp2->content_size)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (r);
}
