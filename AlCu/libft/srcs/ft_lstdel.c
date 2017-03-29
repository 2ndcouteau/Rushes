/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:56:22 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:56:26 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*nxt;

	if (!alst || !del || !*alst)
		return ;
	nxt = (*alst);
	while (nxt)
	{
		tmp = nxt;
		ft_lstdelone((&tmp), del);
		nxt = nxt->next;
	}
	*alst = NULL;
}
