/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 17:57:15 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 20:38:26 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arkanoid.h"

GLFWwindow	*init_glfw(void)
{
	GLFWwindow	*window;

	glfwSetErrorCallback(error_callback);
	if (!glfwInit())
		exit(EXIT_FAILURE);
	if (!(window = glfwCreateWindow(WIN_X, WIN_Y, "Arkanoid", NULL, NULL)))
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	glfwSetKeyCallback(window, key_callback);
	return (window);
}

t_ball		*new_ball(void)
{
	t_ball	*ball;

	if (!(ball = (t_ball*)malloc(sizeof(t_ball))))
		ft_error("MALLOC ERROR IN NEW BALL", NULL);
	ball->pos = vect(0, -0.8);
	ball->dir = vect(1, 1);
	ball->speed = 10;
	ball->rayon = 0.02;
	return (ball);
}

t_barre		*new_barre(void)
{
	t_barre	*barre;

	if (!(barre = (t_barre*)malloc(sizeof(t_barre))))
		ft_error("MALLOC ERROR IN NEW BARRE", NULL);
	barre->pos = vect(0, -0.9);
	barre->speed = 15;
	barre->size = 5;
	barre->life = 3;
	return (barre);
}

t_game		*init_game(void)
{
	if (!(g_game = (t_game*)malloc(sizeof(t_game))))
		ft_error("MALLOC ERROR IN INIT GAME", NULL);
	g_game->cos = init_cos();
	g_game->sin = init_sin();
	g_game->ball = new_ball();
	g_game->barre = new_barre();
	if (!(g_game->all_level = ft_get_maps()))
		ft_error("No Maps", NULL);
	g_game->actual_level = 1;
	g_game->window = init_glfw();
	g_game->score = 0;
	return (g_game);
}
