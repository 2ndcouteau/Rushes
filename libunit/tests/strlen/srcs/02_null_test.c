/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:02:43 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 21:25:25 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include <string.h>

int		strlen_null_test(void)
{
	if (ft_strlen(NULL) == strlen(NULL))
		return (0);
	else
		return (-1);
}
