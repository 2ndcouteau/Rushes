/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bad_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:02:41 by qrosa             #+#    #+#             */
/*   Updated: 2017/02/12 21:25:23 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_test.h"
#include <string.h>

int		strlen_bad_str(void)
{
	char	str[10];
	int		cpt;

	cpt = 0;
	while (cpt < 10)
		str[cpt++] = 'T';
	if (ft_strlen(str) == strlen(str))
		return (0);
	else
		return (1);

}
