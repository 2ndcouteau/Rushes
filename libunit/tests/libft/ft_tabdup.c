/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/27 18:27:35 by pguillot          #+#    #+#             */
/*   Updated: 2015/09/27 18:29:07 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_tabdup(char **tab)
{
	char	**new;
	int		l;
	int		n;

	n = 0;
	l = ft_tablen(tab);
	new = (char **)malloc(sizeof(char *) * (l + 1));
	while (n++ < l)
		new[n - 1] = ft_strdup(tab[n - 1]);
	new[n] = NULL;
	return (new);
}
