/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:04:15 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:38:48 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _LIBUNIT_H
# define _LIBUNIT_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>

# define SUCCESS		0
# define ERROR			1
# define TIMEOUT		1 * 1000 * 1000

typedef	int				(*ptr_fct)(void);

typedef struct			s_env
{
	unsigned int		fail_mark;
	unsigned int		success;
	unsigned int		total;
}						t_env;

typedef struct			s_unit_test
{
	struct s_unit_test	*next;
	ptr_fct				test_fct;
	char				*name_fct;
}						t_unit_test;

int		load_test(t_unit_test **begin_list, char *name_fct, ptr_fct test_fct);
int		exec_test(t_unit_test **begin_list);

char 	*unit_strdup(char *str);
int		unit_strlen(char *str);
void	unit_putstr(char *str);
void	unit_putchar(char c);
void	unit_putnbr(int nb);

#endif
