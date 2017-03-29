# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 18:04:56 by qrosa             #+#    #+#              #
#    Updated: 2017/02/12 22:15:48 by qrosa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Ce makefile est pour compiler le framework.

# Il appelle le makefile des tests dans /test charge de compiler les tests et
# de les linker.

# Puis il compile le programme de test charge d'appeler les routines disponible
# dans la librairie libunit.a

NAME = ./libunit.a

INC = -I ./includes/

SRC = ./srcs/exec_test.c \
	  ./srcs/load_test.c \
	  ./srcs/tools_fct.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Werror -Wextra -Wall

AR = /usr/bin/ar rc
RM = /bin/rm -f

# Sweet colors just for swag :)
RED			=	\033[0;31m
BLUE		=	\033[1;34m
CYAN		=	\033[0;36m
YELLOW		=	\033[0;33m
GREEN		=	\033[1;32m
NC			=	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "libunit makefile: library's compilation"
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@echo "${CYAN}Compiling $^ into $@ ${NC}";
	@$(CC) -g -c $^ -o $@ $(CFLAGS) $(INC)

clean:
	@echo "libunit makefile: object's deletion"
	@$(RM) $(OBJ)

fclean: clean
	@echo "libunit makefile: library's deletion"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
