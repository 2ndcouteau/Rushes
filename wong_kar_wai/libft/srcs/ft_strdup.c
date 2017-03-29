/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/04 11:08:27 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/07 17:34:06 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*str_out;
	int		count;
	int		i;

	i = 0;
	count = ft_strlen(str);
	if ((str_out = (char*)malloc(sizeof(*str_out) * (count + 1))))
	{
		while (str[i])
		{
			str_out[i] = str[i];
			i++;
		}
		str_out[i] = '\0';
		return (str_out);
	}
	return (0);
}
