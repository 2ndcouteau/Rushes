/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:55:08 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/14 18:47:16 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strndup(const char *str, size_t n)
{
	char			*str_out;
	unsigned int	i;

	i = 0;
	if ((str_out = (char*)malloc(sizeof(*str_out) * (n + 1))))
	{
		while (i < n)
		{
			str_out[i] = str[i];
			i++;
		}
		str_out[i] = '\0';
		return (str_out);
	}
	return (0);
}
