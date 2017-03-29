/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 13:20:27 by pguillot          #+#    #+#             */
/*   Updated: 2015/10/23 13:20:28 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void			ft_tabdel(char **tab)
{
	char	*tmp;
	int		i;

	i = 0;
	while (tab[i])
	{
		tmp = tab[i];
		i++;
		free(tmp);
	}
	free(tab);
}
