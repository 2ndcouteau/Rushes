/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 14:41:32 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 20:15:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

void	draw_blocks(float pos[2], float inc[2], int type)
{
	float	inc_cp[2];

	if (type <= 0)
		return ;
	inc_cp[0] = inc[0] - inc[0] / 10;
	inc_cp[1] = inc[1] - inc[1] / 10;
	glBegin(GL_QUADS);
	if (type == 1)
		glColor3f(0.85, 0.32, 0.26);
	if (type == 2)
		glColor3f(0.15, 0.68, 0.37);
	if (type == 3)
		glColor3f(0.20, 0.59, 0.86);
	if (type == 5)
		glColor3f(0.95, 0.77, 0.06);
	glVertex2f(pos[0], pos[1]);
	glVertex2f(pos[0] + inc_cp[0], pos[1]);
	glVertex2f(pos[0] + inc_cp[0], pos[1] - inc_cp[1]);
	glVertex2f(pos[0], pos[1] - inc_cp[1]);
	glEnd();
}

void	draw_ball(t_ball *ball)
{
	int		i;

	glBegin(GL_POLYGON);
	i = 0;
	while (i < 20)
	{
		glVertex2f(ball->pos.x + g_game->cos[i] * ball->rayon,
				ball->pos.y + g_game->sin[i] * ball->rayon);
		i++;
	}
	glEnd();
}

void	draw_barre(t_barre *barre)
{
	float	size;

	size = barre->size / MAX_BARRE_SZ;
	glBegin(GL_QUADS);
	glColor3f(0.85, 0.32, 0.26);
	glVertex2f(barre->pos.x - size - 0.02, barre->pos.y + 0.02);
	glColor3f(0.15, 0.68, 0.37);
	glVertex2f(barre->pos.x + size + 0.02, barre->pos.y + 0.02);
	glColor3f(0.20, 0.59, 0.86);
	glVertex2f(barre->pos.x + size + 0.02, barre->pos.y - 0.02);
	glColor3f(0.95, 0.77, 0.06);
	glVertex2f(barre->pos.x - size - 0.02, barre->pos.y - 0.02);
	glEnd();
}

void	init_frame(GLFWwindow *window)
{
	int		width;
	int		height;

	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1, 1, -1, 1, 1.f, -1.f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void	display(void)
{
	float	pos[2];
	int		i;
	int		j;

	init_frame(g_game->window);
	pos[1] = 1;
	i = 0;
	while (pos[1] > -1 && i < g_game->this_level->h)
	{
		j = 0;
		pos[0] = -1;
		while (pos[0] < 1 && j < g_game->this_level->w)
		{
			draw_blocks(pos, g_game->size, g_game->this_level->map[i][j]);
			j++;
			pos[0] += g_game->size[0];
		}
		i++;
		pos[1] -= g_game->size[1];
	}
	draw_submenu(g_game->score, g_game->actual_level, g_game->barre->life);
	draw_barre(g_game->barre);
	draw_ball(g_game->ball);
	glfwSwapBuffers(g_game->window);
}
