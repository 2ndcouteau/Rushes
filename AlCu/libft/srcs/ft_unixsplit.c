/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unixsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 10:55:19 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/21 11:27:17 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbword(const char *s, int c)
{
	size_t	i;
	size_t	flag;
	size_t	quote;

	if (!s)
		return (0);
	i = 0;
	flag = 1;
	quote = 0;
	while (*s)
	{
		if (*s == '"')
			quote = !quote;
		if (*s != c && flag)
		{
			i++;
			flag = 0;
		}
		if (*s == c && !flag && !quote)
			flag = 1;
		s++;
	}
	return (i);
}

static void	ft_feedtab(char **tab, const char *s, char c, int quote)
{
	size_t	i;
	size_t	flag;
	size_t	start;

	i = 0;
	start = 0;
	flag = 1;
	while (s[i])
	{
		quote = (s[i] == '"') ? !quote : quote;
		if (s[i] != c && flag)
		{
			start = i;
			flag = 0;
		}
		if (s[i] == c && !flag && !quote)
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

char		**ft_unixsplit(char const *s, char c)
{
	size_t	nbword;
	char	**tab;
	int		quote;

	if (!s)
		return (NULL);
	nbword = ft_nbword(s, c) + 1;
	tab = (char **)ft_memalloc(sizeof(char *) * nbword);
	if (tab)
	{
		quote = 0;
		ft_feedtab(tab, s, c, quote);
		tab[nbword - 1] = NULL;
	}
	return (tab);
}
