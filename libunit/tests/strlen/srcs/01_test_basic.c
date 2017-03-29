/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_test_basic.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:02:46 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 21:25:29 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include <string.h>

int		strlen_test_basic(void)
{
	if (ft_strlen("coucou") == strlen("coucou"))
		return (0);
	else
		return (-1);
}
