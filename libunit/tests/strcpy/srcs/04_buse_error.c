/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_buse_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:28:50 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:41:30 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcpy_test.h"
#include <string.h>

int		strcpy_bus_error(void)
{
	char	*src[7];

	if (ft_strcpy((char*)src, "yololololololo") == strcpy((char*)src, "yololololololo"))
		return (0);
	else
		return (-1);
}
