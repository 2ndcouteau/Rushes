/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 22:06:07 by sdahan            #+#    #+#             */
/*   Updated: 2015/12/21 15:19:38 by sdahan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALUM_H
# define ALUM_H

# include "libft.h"
# include <stdbool.h>

# define IA				0
# define USER			1
# define IA_NAME		"IA"
# define DF_NAME		"Player"

# define NO				0
# define YES			1
# define WIN			1
# define LOOSE			0

# define MAX_REM		3

# define DFLT_ALLOC		20
# define MAX_MATCHES	10000

# define ERROR			"ERROR"
# define ERR_ALLOC		"Allocation memory."
# define ERR_ENOENT		"No such file..."
# define ABS(x)			(((x) > 0) ? (x) : -(x))

# define G				"\033[32m"
# define YELLOW			"\033[33m"
# define DEFAULT		"\033[0m"
# define PURPLE			"\033[35m"
# define BLUE			"\033[34m"
# define CYAN			"\033[36m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"

# define USAGE			"usage : ./alum1 [-h -v] [file ...]"
# define Q_PSEUDO		"Tell me your pseudo :"
# define Q_AGAIN		"Do you play again ? [yes/no]"
# define Q_REMOVE		"How many matches do you want to remove [1 - 3] ?"

typedef struct		s_env
{
	int				optv;
	int				**alum;
	char			*pseudo;
	int				nb_line;
	int				(*party)();
}					t_env;

void				ft_gethelp(void);
void				ft_init(t_env *e);
int					ft_perr(char *err);
void				ft_pferr(char *err);
void				ft_destroy_env(t_env *e);
int					ft_save_0board(t_env *e);
int					ft_check_line(char *line);
char				*ft_getanswer(char *quest);
void				ft_choice_player(t_env *e);
int					ft_getmaxmatches(int nb_inline);
void				ft_ifreetab2d(int **t, int size);
int					ft_check_arg(t_env *e, char **av);
int					ft_party_ia(t_env *e, int **alum);
int					ft_party_user(t_env *e, int **alum);
int					**ft_cpy2d(int **alum, int nb_line);
int					ft_save_fboard(t_env *e, char *path);
void				ft_pboard(int **board, int size, int optv);
int					ft_pparty(int ret, char *pseudo, char *color);
void				ft_pcolor(char *msg, char *prec, char *color);
int					ft_user_getmatches(int nb_inline, char *quest);
int					ft_ia_getmatches(t_env *e, int **alum,
					int nb_linem, int max);
#endif
