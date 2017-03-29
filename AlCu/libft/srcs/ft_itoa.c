/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:26:48 by sdahan            #+#    #+#             */
/*   Updated: 2014/11/09 09:59:11 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbdigit(int n)
{
	int			i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t		countn;
	char		*result;
	char		sign;

	sign = 1;
	countn = ft_nbdigit(n);
	if (!(result = ft_strnew(countn)))
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		sign = -1;
	}
	countn--;
	result[countn--] = sign * (n % 10) + '0';
	while ((n = n / 10))
		result[countn--] = sign * (n % 10) + '0';
	return (result);
}
