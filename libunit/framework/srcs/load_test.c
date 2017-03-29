/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 19:16:28 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:13:34 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_unit_test	*create_node(char *name, ptr_fct test_fct)
{
	t_unit_test *new;

	if (name == NULL || name[0] == '\0' || test_fct == NULL)
		return (NULL);
	if (!(new = (t_unit_test*)malloc(sizeof(t_unit_test))))
		return (NULL);
	if ((new->name_fct = unit_strdup(name)) == NULL)
	{
		free(new);
		return (NULL);
	}
	new->test_fct = test_fct;
	new->next = NULL;
	return (new);
}

int					load_test(t_unit_test **begin_list, char *name_fct,
	ptr_fct test_fct)
{
	t_unit_test *new;

	if (begin_list == NULL)
		return (-1);
	if (*begin_list == NULL)
	{
		*begin_list = create_node(name_fct, test_fct);
		if (*begin_list != NULL)
			return (SUCCESS);
		return (ERROR);
	}
	else
	{
		new = *begin_list;
		while (new->next != NULL)
			new = new->next;
		new->next = create_node(name_fct, test_fct);
		if (new->next != NULL)
			return (SUCCESS);
		return (ERROR);
	}
}
