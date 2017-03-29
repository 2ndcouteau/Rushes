/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:35:06 by acouliba          #+#    #+#             */
/*   Updated: 2015/01/08 16:35:07 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnstr(char const *str, size_t n)
{
	size_t i;

	i = 0;
	if (str)
	{
		while (str[i] && i < n)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
