/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:05:04 by acouliba          #+#    #+#             */
/*   Updated: 2014/11/11 15:22:43 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	nbr;

	len = ft_len_int(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if ((str = ft_strnew(len)))
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
		while (nbr)
		{
			str[--len] = nbr % 10 + '0';
			nbr /= 10;
		}
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}
