/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:22:07 by pguillot          #+#    #+#             */
/*   Updated: 2014/11/15 22:50:51 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(int n)
{
	int		l;

	l = 1;
	if (n < 0)
	{
		n = -n;
		l++;
	}
	while (n >= 10)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char			*ft_itoa(int n)
{
	char	*a;
	int		l;

	if (n == -2147483648)
	{
		a = ft_strnew(12);
		return (ft_strcpy(a, "-2147483648"));
	}
	l = ft_intlen(n);
	if ((a = ft_strnew(l + 1)) == NULL)
		return (NULL);
	if (n < 0)
	{
		a[0] = '-';
		n = -n;
	}
	a[l - 1] = '\0';
	while (n >= 10)
	{
		a[l - 1] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	a[l - 1] = n + '0';
	return (a);
}
