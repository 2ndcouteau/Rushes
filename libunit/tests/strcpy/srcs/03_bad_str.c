/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bad_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:24:23 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 23:37:37 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcpy_test.h"
#include <string.h>

int		strcpy_bad_str(void)
{
	char	src[42] = "bonjour";
	char	*str[6];

	if (ft_strcpy((char*)str, src) == strcpy((char*)str, src))
		return (0);
	else
		return (-1);
}
