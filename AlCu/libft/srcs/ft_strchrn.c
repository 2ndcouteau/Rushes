/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:52:59 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:53:03 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchrn(char *s, char c, int nb, int inc)
{
	int		i;
	int		j;
	char	*str;

	if (nb == 0)
		return (NULL);
	i = 0;
	j = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		if (j == nb)
		{
			str = (inc) ? ft_strndup(s, i + 1) : ft_strndup(s, i);
			return (str);
		}
		i++;
	}
	return (str);
}
