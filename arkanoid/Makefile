# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jabadie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/21 03:34:53 by jabadie           #+#    #+#              #
#    Updated: 2015/05/03 20:24:05 by jabadie          ###   ########.fr        #
#    Updated: 2015/05/03 19:45:13 by jabadie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = arkanoid

OBJ_PATH = ./objs/
SRC_PATH = ./srcs/

INCLUDE = -I ./includes \
		  -I ./libft/includes/ \
		  -I ./glfw/include/GLFW/
LIBFT = -L ./libft -lft \
		-L ./glfw/install/lib -lglfw3 -framework GLUT -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

CFLAGS = -Wall -Werror -Wextra -Wno-deprecated

SRC_NAME = main.c \
		   display.c \
		   init.c \
		   vect.c \
		   ft_create_elem.c \
		   ft_get_maps.c \
		   ft_push_back.c \
		   move.c \
		   menu.c \
		   update.c \
		   tab_cosin.c \
		   collide.c \
		   get_ball.c \
		   draw_submenu.c

OBJ = $(addprefix $(OBJ_PATH), $(SRC_NAME:.c=.o))
SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

RED=\033[0;31m
LBLUE=\033[1;34m
CYAN=\033[0;36m
ORANGE=\033[0;33m
NC=\033[0m

GLFW = ./glfw/

all: glfw $(NAME)

glfw: | $(GLFW)
	git submodule add -f https://github.com/glfw/glfw.git
	mkdir -p ./glfw/install
	cd ./glfw && ~/.brew/bin/cmake -D CMAKE_INSTALL_PREFIX=./install .
	make -C ./glfw
	make -C ./glfw install

$(NAME): $(OBJ)
	@make -C libft
	@gcc -g $(CFLAGS) $(INCLUDE) $(LIBFT) -o $(NAME) $(OBJ)
	@echo "${ORANGE}Created successfully: $(NAME)${NC}";

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@gcc -g $(CFLAGS) $(INCLUDE) -o $@ -c $^
	@echo "${LBLUE}Created $@ ${NC}";

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Deleting: $(NAME)${NC}"

clean:
	@rm -rf $(OBJ_PATH)
	@echo "$(RED)Deleting: $(OBJ_PATH)${NC}"

re : fclean all

.PHONY: all clean fclean re

