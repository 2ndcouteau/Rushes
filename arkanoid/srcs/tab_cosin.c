/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_cosin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 15:38:12 by qrosa             #+#    #+#             */
/*   Updated: 2015/05/03 18:51:51 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

float	*init_cos(void)
{
	float	*cos;

	cos = malloc(sizeof(float) * 21);
	cos[0] = 1;
	cos[1] = 0.951;
	cos[2] = 0.809;
	cos[3] = 0.588;
	cos[4] = 0.309;
	cos[5] = 0;
	cos[6] = -0.309;
	cos[7] = -0.588;
	cos[8] = -0.809;
	cos[9] = -0.951;
	cos[10] = -1;
	cos[11] = -0.951;
	cos[12] = -0.809;
	cos[13] = -0.588;
	cos[14] = -0.309;
	cos[15] = 0;
	cos[16] = 0.309;
	cos[17] = 0.588;
	cos[18] = 0.809;
	cos[19] = 0.951;
	cos[20] = 1;
	return (cos);
}

float	*init_sin(void)
{
	float	*sin;

	sin = malloc(sizeof(float) * 21);
	sin[0] = 0;
	sin[1] = 0.309;
	sin[2] = 0.588;
	sin[3] = 0.809;
	sin[4] = 0.951;
	sin[5] = 1;
	sin[6] = 0.951;
	sin[7] = 0.809;
	sin[8] = 0.588;
	sin[9] = 0.309;
	sin[10] = 0;
	sin[11] = -0.309;
	sin[12] = -0.588;
	sin[13] = -0.809;
	sin[14] = -0.951;
	sin[15] = -1;
	sin[16] = -0.951;
	sin[17] = -0.809;
	sin[18] = -0.588;
	sin[19] = -0.309;
	sin[20] = 0;
	return (sin);
}
