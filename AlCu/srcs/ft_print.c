/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:18:43 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 13:03:43 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum.h"
#include <stdlib.h>

void		ft_pferr(char *err)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd("Error : ", 2);
	ft_putendl_fd(err, 2);
	ft_putstr_fd(DEFAULT, 2);
	exit(-1);
}

int			ft_perr(char *err)
{
	ft_putstr_fd(RED, 2);
	ft_putendl_fd(err, 2);
	ft_putstr_fd(DEFAULT, 2);
	return (-1);
}

void		ft_pcolor(char *head, char *prec, char *color)
{
	ft_putstr(color);
	ft_putstr(head);
	ft_putchar(' ');
	ft_putendl(prec);
	ft_putstr(DEFAULT);
}

static void	ft_pline_board(int size, int optv)
{
	if (optv)
	{
		ft_putstr(RED);
		ft_putstr("[ ");
		ft_putnbr(size);
		ft_putstr(" ] ");
		ft_putstr(DEFAULT);
	}
	while (size--)
	{
		ft_putstr("|");
		if (size > 0)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void		ft_pboard(int **board, int size, int optv)
{
	int		i;

	if (!board)
		return ;
	i = 0;
	while (i < size)
	{
		ft_pline_board(board[i][0], optv);
		i++;
	}
}
