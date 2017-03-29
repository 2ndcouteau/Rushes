/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_streplacef.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 21:59:07 by sdahan            #+#    #+#             */
/*   Updated: 2015/09/22 22:00:43 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_parser(char *s)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] == 's')
			count++;
		i++;
	}
	return (count);
}

static int	ft_size(int nb, char **av)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < nb)
	{
		count += ft_strlen(av[i]);
		i++;
	}
	return (count + 1);
}

static void	ft_copy_av(char *str, int *j, char *av, int *index)
{
	int		i;

	i = 0;
	while (av[i])
	{
		str[*j] = av[i];
		(*j)++;
		i++;
	}
	(*index)++;
}

char		*ft_streplacef(char *s, char **av)
{
	int		i;
	int		j;
	int		k;
	int		nb;
	char	*str;

	if (!av)
		return (s);
	nb = ft_nb_parser(s);
	if (!(str = ft_memalloc(sizeof(char) * ft_strlen(s) + ft_size(nb, av))))
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] == 's')
			ft_copy_av(str, &j, av[k++], &i);
		else
			str[j++] = s[i];
		i++;
	}
	return (str);
}
