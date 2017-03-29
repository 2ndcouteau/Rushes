/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/05 13:46:26 by sdahan            #+#    #+#             */
/*   Updated: 2014/12/06 17:54:17 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int nombre)
{
	int	counter;

	counter = 0;
	if (nombre == 0)
		return (1);
	while (nombre > 0)
	{
		nombre = nombre / 10;
		counter++;
	}
	return (counter);
}
