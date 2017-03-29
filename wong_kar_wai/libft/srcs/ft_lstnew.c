/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:36:34 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/07 16:46:18 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*list;
	unsigned char	*cnt;

	if ((cnt = (unsigned char *)malloc((content_size + 1) * sizeof(*content))))
	{
		if (!content)
		{
			cnt = NULL;
			content_size = 0;
		}
		else
			cnt = ft_memcpy(cnt, content, content_size);
		if ((list = (t_list*)malloc(content_size * sizeof(*list))))
		{
			list->content = cnt;
			list->content_size = content_size;
			list->next = NULL;
			return (list);
		}
	}
	return (0);
}
