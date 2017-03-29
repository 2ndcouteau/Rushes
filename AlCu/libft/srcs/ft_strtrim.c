/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:11:31 by sdahan            #+#    #+#             */
/*   Updated: 2015/07/04 19:14:41 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	start = 0;
	while (ft_isspace(s[start]))
		start++;
	end = len - 1;
	while (ft_isspace(s[end]) && end >= start)
		end--;
	return (ft_strsub(s, start, (end - start) + 1));
}
