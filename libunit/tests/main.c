/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:01:29 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:39:38 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include "strcpy_test.h"
#include "atoi_test.h"
#include "strchr_test.h"

int		main(void)
{
	int ret;

	ret = 0;
	unit_putstr("#################################################\n");
	unit_putstr("######               UNIT TESTS            ######\n");
	unit_putstr("#################################################\n\n");
	if (strlen_launcher() != 0)
		ret = 1;
	if (strcpy_launcher() != 0)
		ret = 1;
	if (atoi_launcher() != 0)
		ret = 1;
	if (strchr_launcher() != 0)
		ret = 1;
	return (ret ? -1 : 0);
}
