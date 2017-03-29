/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:55:27 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:55:34 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*extract;

	if (!s)
		return (NULL);
	if ((extract = ft_strnew(len)))
	{
		i = 0;
		while (i < len)
		{
			extract[i] = s[start];
			start++;
			i++;
		}
	}
	return (extract);
}
