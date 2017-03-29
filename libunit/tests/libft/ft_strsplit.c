/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/06 18:09:59 by pguillot          #+#    #+#             */
/*   Updated: 2015/02/01 16:51:46 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_tab_nbr(const char *s, char c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

static size_t	ft_sltoc(const char *src, char c)
{
	size_t		i;
	size_t		len;

	i = 0;
	len = ft_strlen(src);
	while (src[i] != c && i < len)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dst;

	i = 0;
	k = -1;
	if (!s)
		return (NULL);
	dst = (char **)ft_memalloc((sizeof(char *) * (ft_split_tab_nbr(s, c) + 1)));
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			dst[++k] = (char *)ft_memalloc(ft_sltoc(&s[i], c) + 1);
			j = 0;
			while (s[i] != c && s[i] != '\0')
				dst[k][j++] = s[i++];
			dst[k][j] = '\0';
		}
	}
	dst[k + 1] = NULL;
	return (dst);
}
