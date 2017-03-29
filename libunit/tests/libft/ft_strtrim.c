/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:11:58 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/10 13:23:40 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	a;
	size_t			b;

	if (s)
	{
		a = 0;
		while ((s[a] == ' ' || s[a] == '\n' || s[a] == '\t') && s[a] != '\0')
			a++;
		b = ft_strlen(s) - 1;
		while ((s[b] == ' ' || s[b] == '\n' || s[b] == '\t') && b > a)
			b--;
		b = b - a + 1;
		return (ft_strsub(s, a, b));
	}
	return (NULL);
}
