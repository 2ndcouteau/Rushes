/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 13:00:13 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 20:45:12 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

#include <stdlib.h>

void	error_callback(int error, const char *description)
{
	(void)error;
	ft_error((char*)description, NULL);
}

void	key_callback(GLFWwindow *window, int key, int scancode,
									int action, int mods)
{
	(void)scancode;
	(void)mods;
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	if (key == GLFW_KEY_RIGHT)
		move_right(g_game->barre);
	if (key == GLFW_KEY_LEFT)
		move_left(g_game->barre);
	if (key == GLFW_KEY_N && action == GLFW_PRESS)
		g_game->this_level->nblocks = 0;
}

int		main(void)
{
	double	refresh;

	g_game = init_game();
	get_level(1);
	g_game->size[0] = 2.f / g_game->this_level->w;
	g_game->size[1] = 2.f / g_game->this_level->h;
	while (!glfwWindowShouldClose(g_game->window))
	{
		refresh = glfwGetTime() + 0.01;
		update(g_game->ball);
		display();
		glfwPollEvents();
		while (glfwGetTime() < refresh)
			usleep(10);
	}
	glfwDestroyWindow(g_game->window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}
