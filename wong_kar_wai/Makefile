#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouliba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/12 11:46:25 by acouliba          #+#    #+#              #
#    Updated: 2015/03/01 19:09:22 by acouliba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC:=2048_folder/srcs/main.c\
	2048_folder/srcs/deuxmille.c\
	2048_folder/srcs/show.c\
	2048_folder/srcs/show_bis.c\
	2048_folder/srcs/key_hook.c\
	2048_folder/srcs/right.c\
	2048_folder/srcs/left.c\
	2048_folder/srcs/up.c\
	2048_folder/srcs/down.c\
	2048_folder/srcs/victory.c\
	2048_folder/srcs/random_bis.c\
	2048_folder/srcs/loose.c\
	2048_folder/srcs/loose_bis.c\
	2048_folder/srcs/menu.c\
	2048_folder/srcs/color.c\
	2048_folder/srcs/comp_tab.c\
	2048_folder/srcs/sleep.c\
	2048_folder/srcs/random.c

OBJ=$(SRC:.c=.o)

# Lib includes
INC=ps_folder/includes
LIBFT=libft/libft.a
LIB=-L libft -lft
INCLFT=-I libft/includes
LIBCURSE=-lncurses

# Options can be changed
CFLAGS:=-Wall -Wextra -Werror
CC:=gcc
NAME:=game_2048

# Sweet colors just for swag :)

RED=\033[0;31m
LBLUE=\033[1;34m
CYAN=\033[0;36m
ORANGE=\033[0;33m
GREEN=\033[1;32m
NC=\033[0m

all:$(LIBFT) $(NAME)

$(LIBFT):
	@make -C libft

$(NAME): $(OBJ)
	@echo "${GREEN}Linking $(NAME)${NC}"
	@$(CC) -g -o $(NAME) $(LIB) $(LIBCURSE) $(OBJ)

%.o: %.c
	@echo "${LBLUE}Compiling $^ into $@ ${NC}";
	@$(CC) -c $^ -o $@ $(CFLAGS) -I $(INC) $(INCLFT)

clean:
	@make clean -C libft
	@echo "${CYAN}Delete game_2048 OBJS ${NC}";
	@rm -f $(OBJ)

fclean: clean
	@echo "${RED}Remove $(LIBFT)${NC}"
	@rm -f $(LIBFT)
	@echo "${RED}Remove $(NAME)${NC}"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re