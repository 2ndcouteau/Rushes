/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublestrlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 14:05:52 by acouliba          #+#    #+#             */
/*   Updated: 2015/02/18 19:16:48 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_doublestrlen(char **str)
{
	size_t			counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}
