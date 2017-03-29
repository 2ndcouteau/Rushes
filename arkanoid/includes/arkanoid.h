/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arkanoid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/02 10:13:35 by jabadie           #+#    #+#             */
/*   Updated: 2015/05/03 20:14:55 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARKANOID_H
# define ARKANOID_H

# include "glfw3.h"
# include "libft.h"
# include <stdio.h>
# include <math.h>
# include <dirent.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define WIN_X 1000
# define WIN_Y 1000
# define MAX_BARRE_SZ 40.f
# define ABS(x) (x) > 0 ? (x) : -(x)

typedef struct		s_map
{
	int				**map;
	int				nblocks;
	int				h;
	int				w;
	struct s_map	*next;
}					t_map;

typedef struct		s_vect
{
	float			x;
	float			y;
}					t_vect;

typedef struct		s_ball
{
	t_vect			pos;
	t_vect			dir;
	float			speed;
	float			rayon;
}					t_ball;

typedef struct		s_barre
{
	t_vect	pos;
	int		speed;
	int		size;
	int		life;
}					t_barre;

typedef struct		s_game
{
	t_ball		*ball;
	t_barre		*barre;
	t_map		*this_level;
	t_map		*all_level;
	GLFWwindow	*window;
	int			actual_level;
	int			score;
	float		size[2];
	float		*cos;
	float		*sin;
}					t_game;

t_game				*g_game;

void				get_level(int nb);
void				display(void);
t_game				*init_game(void);

t_vect				vect(float x, float y);

void				error_callback(int error, const char *description);
void				key_callback(GLFWwindow *window, int key, int scancode,\
	int action, int mods);
float				*init_cos();
float				*init_sin();
void				draw_submenu(int score, int actual_level, int life);
void				draw_string(char *str);

/*
*** ==== PARSER FONCTION === ***
*/
t_map				*ft_get_maps();
void				ft_get_one_map(int fd, t_map **begin_list);
t_map				*ft_create_elem(int fd);
void				ft_push_back(int fd, t_map *begin_list_maps);

/*
** UPDATE & EVENTS
*/

t_ball				*new_ball(void);
void				update(t_ball *ball);
void				move_left(t_barre *barre);
void				move_right(t_barre *barre);

void				collide_vert(t_ball *ball, int dir);
void				collide_hori(t_ball *ball, int dir);
void				collide_barre(t_ball *ball, t_barre *barre);

int					ball_collide_w_level(t_ball *ball, t_map *level);
int					ball_collide_w_barre(t_ball *ball, t_barre *barre);

void				lose_life(void);
int					get_case(float x, float y, t_map *map, float inc[2]);

float				get_left(t_ball *ball);
float				get_right(t_ball *ball);
float				get_up(t_ball *ball);
float				get_down(t_ball *ball);

#endif
