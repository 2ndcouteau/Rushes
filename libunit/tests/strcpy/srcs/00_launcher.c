/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:17:41 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:42:56 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcpy_test.h"

int		strcpy_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	unit_putstr("## STRCPY TEST ##\n");
	load_test(&testlist, "01_test_basic", &strcpy_test_basic);
	load_test(&testlist, "02_null_test", &strcpy_null_test);
	load_test(&testlist, "03_bad_str.c", &strcpy_bad_str);
	load_test(&testlist, "04_buse_error.c", &strcpy_bus_error);
	return (exec_test(&testlist));
}
