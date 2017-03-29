/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:20:09 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:32:14 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcpy_test.h"
#include <string.h>

int		strcpy_test_basic(void)
{
	char	*str[42];

	if (ft_strcpy((char*)str, "coucou") == strcpy((char*)str, "coucou"))
		return (0);
	else
		return (-1);
}
