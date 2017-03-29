/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:22:50 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:32:11 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcpy_test.h"
#include <string.h>

int		strcpy_null_test(void)
{
	if (ft_strcpy(NULL, NULL) == strcpy(NULL, NULL))
		return (0);
	else
		return (-1);
}
