/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strextract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 13:31:04 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/06 13:49:15 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strextract(const char *s, char c)
{
	int		i;

	i = ft_strrchri(s, c);
	if (i == -1)
		return (NULL);
	return (ft_strndup(s, i + 1));
}
