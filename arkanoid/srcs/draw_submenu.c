/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_submenu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/03 17:56:06 by qrosa             #+#    #+#             */
/*   Updated: 2015/05/03 21:13:18 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"
#include "/System/Library/Frameworks/GLUT.framework/Versions/A/Headers/glut.h"

void	draw_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
		i++;
	}
}

void	draw_submenu(int score, int actual_level, int life)
{
	char *str;

	glColor3d(1.0, 0.0, 0.0);
	glRasterPos2d(-0.98, -0.99);
	draw_string("Score : ");
	str = ft_itoa(score * 100);
	glColor3d(1.0, 0.0, 0.0);
	glRasterPos2d(-0.83, -0.99);
	draw_string(str);
	glColor3d(0.0, 1.0, 0.0);
	glRasterPos2d(-0.50, -0.99);
	draw_string("Niveau : ");
	str = ft_itoa(actual_level);
	glColor3d(0.0, 1.0, 0.0);
	glRasterPos2d(-0.32, -0.99);
	draw_string(str);
	glColor3d(0.0, 1.5, 1.0);
	glRasterPos2d(0, -0.99);
	draw_string("Vie : ");
	str = ft_itoa(life);
	glColor3d(0.0, 1.5, 1.0);
	glRasterPos2d(0.10, -0.99);
	draw_string(str);
}
