/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:46:16 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:48:57 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbword(const char *s, int c)
{
	size_t	i;
	size_t	flag;

	if (!s)
		return (0);
	i = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c && flag)
		{
			i++;
			flag = 0;
		}
		if (*s == c && !flag)
			flag = 1;
		s++;
	}
	return (i);
}

static void	ft_feedtab(char **tab, const char *s, char c)
{
	size_t	flag;
	size_t	i;
	size_t	start;

	start = 0;
	flag = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			start = i;
			flag = 0;
		}
		if (s[i] == c && !flag)
		{
			*tab = ft_strsub(s, start, i - start);
			tab++;
			flag = 1;
		}
		i++;
	}
	if (!flag)
		*tab = ft_strsub(s, start, i - start);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	nbword;
	char	**tab;

	if (!s)
		return (NULL);
	nbword = ft_nbword(s, c) + 1;
	tab = (char **)ft_memalloc(sizeof(char *) * nbword);
	if (tab)
	{
		ft_feedtab(tab, s, c);
		tab[nbword - 1] = NULL;
	}
	return (tab);
}
