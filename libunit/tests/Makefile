# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 22:00:16 by qrosa             #+#    #+#              #
#    Updated: 2017/02/12 23:35:42 by qrosa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_PATHS:=$(shell find . -depth 1 -type d)
SRC_NAME:=$(shell find . -mindepth 2 -type f -name "[0-9][0-9]*.c")
INC_NAME=$(shell find . -mindepth 2 -type f -name "*.h")
OBJ_NAME=$(SRC_NAME:.c=.o)

SRC=$(SRC_NAME)
OBJ=$(OBJ_NAME)
INCF=./strlen/includes\
	 ./atoi/includes\
	 ./strcpy/includes\
	 ./strchr/includes\
	./libft/includes\
	../framework/includes
INC=$(addprefix -I, $(INCF))

# Lib includes
LIBFT:=-L libft/ -lft
LIBUNIT:=-L ../framework/ -lunit

# Options can be changed
CFLAGS= -Wall -Wextra -Werror
CC= gcc
NAME= unit_test_binary

# Sweet colors just for swag :)
RED			=	\033[0;31m
BLUE		=	\033[1;34m
CYAN		=	\033[0;36m
YELLOW		=	\033[0;33m
GREEN		=	\033[1;32m
NC			=	\033[0m

all: $(NAME)

$(NAME):$(OBJ) ./main.c
	@make -s -C ../framework
	@make -s -C libft
	@echo "${GREEN}Compile $(NAME) with $(CFLAGS)${NC}";
	@$(CC) $(CLFAGS) $(OBJ) ./main.c $(INC) $(LIBUNIT) $(LIBFT) -o $(NAME)

%.o:%.c $(INC_NAME)
	@echo "${ORANGE}Create bynary $(NAME) : $@ with $<${NC}";
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean:
	@echo "${RED}Test makefile: object's deletion${NC}"
	@rm -rf $(OBJ)

fclean: clean
	@echo "${RED}Delete $(NAME) file ${NC}"
	@rm -rf $(NAME)

re: fclean all clean

test: all
	./$(NAME)

.PHONY: all clean fclean test
