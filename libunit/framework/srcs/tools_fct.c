/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_fct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:17:24 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 22:48:10 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int			unit_strlen(char *str)
{
	int len;

	len = 0;
	if (str != NULL)
	{
		while (str[len] != '\0')
			++len;
	}
	return (len);
}

char 		*unit_strdup(char *str)
{
	int 	len;
	char	*new;

	if (str != NULL)
	{
		len = unit_strlen(str);
		if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		len = 0;
		while (str[len] != '\0')
		{
			new[len] = str[len];
			++len;
		}
		new[len] = '\0';
		return (new);
	}
	return (NULL);
}

void	unit_putstr(char *str)
{
	int len;

	len = unit_strlen(str);
	write(STDOUT_FILENO, str, len);
}

void	unit_putchar(char c)
{
	write(1, &c, 1);
}

void	unit_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		unit_putstr("-214748364");
		nb = 8;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		unit_putnbr(nb / 10);
		unit_putnbr(nb % 10);
	}
	else
		unit_putchar(nb + 48);
}
