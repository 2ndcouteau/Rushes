/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 13:52:51 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/08 13:55:15 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_size_word(char *s, char *filter)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (filter[j] && filter[j] != s[i])
			j++;
		if (!filter[j])
			count++;
		j = 0;
		i++;
	}
	return (count);
}

char		*ft_strclean(char *s, char *filter)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!(str = (char *)malloc(sizeof(*str) * ft_size_word(s, filter) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (filter[j] && filter[j] != s[i])
			j++;
		if (!filter[j])
		{
			str[k] = s[i];
			k++;
		}
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}
