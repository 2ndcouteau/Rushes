/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarround.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/05 18:17:23 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:51:37 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strarround(char *result, int dot, int size)
{
	int			i;
	char		*r_arround;

	if (!(r_arround = ft_strnew(size)))
		return (NULL);
	i = 0;
	size--;
	while (i < size)
	{
		if (i > dot)
		{
			if (result[i + 1] > '5')
				r_arround[i] = (result[i] - '0' + 1) % 10 + '0';
			else
				r_arround[i] = result[i];
		}
		else
			r_arround[i] = result[i];
		i++;
	}
	r_arround[i] = '\0';
	return (r_arround);
}
