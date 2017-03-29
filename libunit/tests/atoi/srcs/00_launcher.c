/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 22:45:27 by pguillot          #+#    #+#             */
/*   Updated: 2017/02/12 22:47:15 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_test.h"

int		atoi_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	unit_putstr("## ATOI TEST ##\n");
	load_test(&testlist, "01_test_basic", &atoi_test_basic);
	load_test(&testlist, "02_null_test", &atoi_null_test);
	return (exec_test(&testlist));
}
