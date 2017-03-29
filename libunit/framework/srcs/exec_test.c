/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:45:36 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:43:32 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void		print_end_test(t_env *e)
{
	unit_putchar('\n');
	unit_putnbr(e->success);
	unit_putchar('/');
	unit_putnbr(e->total);
	unit_putstr(" tests checked.\n");
	if (e->success == e->total)
		unit_putstr("GOOD JOB\n\n");
	else
		unit_putstr("TRY AGAIN\n\n");
}

static void		print_simple_out(t_env *env, int status)
{
	unit_putstr(" :    [");
	if (status == SUCCESS)
	{
		++env->success;
		unit_putstr("OK]\n");
	}
	else
	{
		env->fail_mark = 1;;
		unit_putstr("KO]\n");
	}
}

static void		print_signal_out(t_env *env, int sig)
{
	env->fail_mark = 1;
	unit_putstr(" :    [");
	if (sig == SIGABRT)
		unit_putstr("ABORT]\n");
	if (sig == SIGSEGV)
		unit_putstr("SEGFAULT]\n");
	if (sig == SIGBUS)
		unit_putstr("BUSE]\n");
	if (sig == SIGALRM)
		unit_putstr("TIMEOUT]\n");
}

static int	exec_fct(t_unit_test *node, t_env *env)
{
	int			status;
	pid_t		pid;

	if ((pid = fork()) == -1)
	{
		unit_putstr("Error: fork failed.\n");
		return (ERROR);
	}
	if (pid == 0)
	{
		ualarm(TIMEOUT, 0);
		node->test_fct();
		exit(EXIT_SUCCESS);
	}
	wait(&status);
	++env->total;
	unit_putstr("	>");
	unit_putstr(node->name_fct);
	if (WIFEXITED(status))
		print_simple_out(env, WEXITSTATUS(status));
	if (WIFSIGNALED(status))
		print_signal_out(env, WTERMSIG(status));
	return (SUCCESS);
}

void		*free_test_list(t_unit_test **list)
{
	t_unit_test	*tmp;

	if (list != NULL)
	{
		while (*list != NULL)
		{
			tmp = *list;
			*list = (*list)->next;
			if (tmp->name_fct != NULL)
				free(tmp->name_fct);
			tmp->name_fct = NULL;
			tmp->test_fct = NULL;
			if (tmp != NULL)
				free(tmp);
			tmp = NULL;
		}
	}
	return (NULL);
}

int			exec_test(t_unit_test **begin_list)
{
	t_env		env;
	t_unit_test *tmp;

	env.success = 0;
	env.total = 0;
	env.fail_mark = 0;
	if (begin_list != NULL)
	{
		tmp = *begin_list;
		while (tmp != NULL)
		{
			exec_fct(tmp, &env);
			tmp = tmp->next;
		}
		print_end_test(&env);
		*begin_list = free_test_list(begin_list);
	}
	if (env.fail_mark == 0)
		return (SUCCESS);
	return (ERROR);
}
