/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:01:27 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:11:31 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"

int		strlen_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	unit_putstr("## STRLEN TEST ##\n");
	load_test(&testlist, "01_test_basic", &strlen_test_basic);
	load_test(&testlist, "02_null_test", &strlen_null_test);
	load_test(&testlist, "03_bad_str.c", &strlen_bad_str);
	return (exec_test(&testlist));
}
