/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouliba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 21:04:41 by acouliba          #+#    #+#             */
/*   Updated: 2015/03/01 21:20:53 by acouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

/*
**System libs--------------------
*/

# include <unistd.h>
# include <libft.h>
# include <time.h>
# include <ncurses.h>

/*
**Structures--------------------
*/

typedef enum	e_const
{
	WIN_VALUE = 2048
}				t_const;

typedef struct		s_coor
{
	int				x;
	int				y;
}					t_coor;

typedef struct		s_game
{
	int				plateau[4][4];
	int				plateau_test[4][4];
	t_coor			size;
	int				win_value;
	int				win;
}					t_game;

/*
**Prototypes--------------------
*/
void				key_hook(t_game *game, int keycode);
void				ft_2048(t_game *game);
void				set_basics(t_game *game);
void				random_set(t_game *game);
void				set_zeros(t_game *game);

/*
**Grid-----------
*/

void				print_tab(t_game *game);
void				extern_grid(t_game *game);
void				inside_ver(t_game *game);
void				inside_hor(t_game *game);
void				show_tab(t_game *game);
void				ft_horizontal(t_coor origin, size_t size);
void				ft_vertical(t_coor origin, size_t size);

/*
**Right-----------
*/

void				ft_right(t_game *game);
int					seek_nb(t_game *game, int i, int j);
void				line_r_shift(t_game *game, int j);
void				right_fusion(t_game *game, int j);

/*
**Left-----------
*/

void				ft_left(t_game *game);
int					seek_nb_l(t_game *game, int i, int j);
void				line_l_shift(t_game *game, int j);
void				left_fusion(t_game *game, int j);

/*
**Up-----------
*/

void				ft_up(t_game *game);
int					seek_nb_u(t_game *game, int i, int j);
void				line_u_shift(t_game *game, int j);
void				up_fusion(t_game *game, int j);

/*
**Down-----------
*/

void				ft_down(t_game *game);
int					seek_nb_d(t_game *game, int i, int j);
void				line_d_shift(t_game *game, int j);
void				down_fusion(t_game *game, int j);

/*
**Victory-----------
*/

int					victory(t_game *game);
void				show_victory(t_game *game);

/*
**Lose-----------
*/

int					loose(t_game *game);
int					show_loose(t_game *game);
int					losing_test(t_game *game);
void				test1(t_game *game, int i, int j, int *k);
void				test2(t_game *game, int i, int j, int *k);
void				test3(t_game *game, int i, int j, int *k);

/*
**Menu-----------
*/

void				menu(t_game *game);
void				contour(t_game *game);
void				mobil_title(t_game *game);

/*
**Color-----------
*/

void				init_numbercolor(void);
int					set_color(t_coor count, t_game *game);

/*
**Random-----------
*/

void				set_random_nb(t_game *game);
void				random_it(t_game *game, int random);
int					nb_zero(t_game *game);
int					comp_tab(t_game *game);
void				tab_cpy(t_game *game);

/*
**Sleep-----------
*/

void				ft_sleep(int x);

#endif
