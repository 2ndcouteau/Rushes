/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 22:57:21 by pguillot          #+#    #+#             */
/*   Updated: 2017/02/12 22:59:45 by pguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_test.h"
#include <stdlib.h>

int		atoi_null_test(void)
{
	if (ft_atoi(NULL) == atoi(NULL))
		return (0);
	else
		return (-1);
}
