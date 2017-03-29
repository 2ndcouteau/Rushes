/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/01 14:39:02 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/17 09:56:40 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_create_str(int *size, long double n, int size_int, int prec)
{
	char		*r;
	int			sign;

	sign = 1;
	r = NULL;
	if (n < 0)
		*size = size_int + prec + 1 + sign;
	else
		*size = size_int + prec + 1;
	if (!(r = ft_strnew(*size)))
		return (NULL);
	return (r);
}

static int		ft_transform_to_dec(long double *n, int *sign)
{
	int			size_int;

	*sign = 1;
	size_int = 0;
	if (*n < 0)
	{
		*sign = -1;
		*n = (*n) * (-1);
	}
	while (*n > 1)
	{
		(*n) /= 10;
		size_int++;
	}
	if (*sign == -1)
		*n = (*n) * (-1);
	return (size_int);
}

static int		ft_write_neg(char *result, int *i)
{
	result[0] = '-';
	(*i)++;
	return (1);
}

static char		*ft_(char *result, int i)
{
	if ((ft_isdigit(result[i - 1]) && result[i - 2] > '5')
			|| (result[0] != '-' && result[i - 1] > '5'))
		return (ft_strarround(result, ft_strchri(result, '.'),
					ft_strlen(result)));
		return (ft_strndup(result, ft_strlen(result) - 1));
}

char			*ft_ftoa(long double n, int precision)
{
	int			i;
	int			size;
	int			sign;
	char		*result;
	int			size_int;

	size_int = ft_transform_to_dec(&n, &sign);
	if (!(result = ft_create_str(&size, n, size_int, precision)))
		return (NULL);
	i = 0;
	size_int += (sign == -1) ? ft_write_neg(result, &i) : 0;
	while (i < (size + 1))
	{
		if (i == size_int)
			result[i] = '.';
		else
		{
			n *= 10.0;
			result[i] = (sign * ((long)n % 10)) + '0';
		}
		i++;
	}
	result[i] = '\0';
	return (ft_(result, i));
}
