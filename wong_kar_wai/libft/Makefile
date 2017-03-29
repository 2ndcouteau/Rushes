#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouliba <acouliba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 18:24:44 by acouliba          #+#    #+#              #
#    Updated: 2015/03/01 20:50:01 by acouliba         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC=srcs/ft_strnequ.c srcs/ft_atoi.c srcs/ft_bzero.c srcs/ft_isalnum.c srcs/ft_isalpha.c srcs/ft_isascii.c srcs/ft_isdigit.c srcs/ft_isprint.c srcs/ft_itoa.c srcs/ft_memalloc.c srcs/ft_memccpy.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_memcpy.c srcs/ft_memdel.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_putchar.c srcs/ft_putchar_fd.c srcs/ft_putendl.c srcs/ft_putnbr.c srcs/ft_putnbr_fd.c srcs/ft_putstr.c srcs/ft_putstr_fd.c srcs/ft_strcat.c srcs/ft_strchr.c srcs/ft_strclr.c srcs/ft_strcmp.c srcs/ft_strcpy.c srcs/ft_strdel.c srcs/ft_strdup.c srcs/ft_strequ.c srcs/ft_striter.c srcs/ft_striteri.c srcs/ft_strjoin.c srcs/ft_strlcat.c srcs/ft_strlen.c srcs/ft_strmap.c srcs/ft_strmapi.c srcs/ft_strncat.c srcs/ft_strncmp.c srcs/ft_strncpy.c srcs/ft_strnew.c srcs/ft_strnstr.c srcs/ft_strrchr.c srcs/ft_strsplit.c srcs/ft_strstr.c srcs/ft_strsub.c  srcs/ft_tolower.c srcs/ft_toupper.c srcs/ft_len_int.c srcs/ft_strndup.c srcs/ft_putnstr.c srcs/ft_doublestrlen.c srcs/ft_putendl_fd.c

OBJ=$(SRC:.c=.o)

CC=gcc

CFLAGS=-Wall -Wextra -Werror

INC=includes

NAME=libft.a

RED=\033[0;31m
LBLUE=\033[1;34m
CYAN=\033[0;36m
GREEN=\033[1;32m
ORA=\033[1;33m
NC=\033[0m

all:$(NAME)

$(NAME):$(OBJ)
	@echo "${GREEN}Linking $(NAME)${NC}"
	@echo "${GREEN}ar rc $(NAME)${NC}"
	@ar rc $(NAME) $(OBJ)
	@echo "${GREEN}ranlib $(NAME)${NC}"
	@ranlib $(NAME)

%.o: %.c
	@echo "${ORA}Compiling $^ into $@ ${NC}";
	@$(CC) -c $^ -o $@ $(CFLAGS) -I $(INC)

clean:
	@echo "${CYAN}Delete libft OBJS${NC}"
	@rm -rf $(OBJ)

fclean: clean
	@echo "${RED}Remove $(NAME)${NC}"
	@rm -rf $(NAME)

re: fclean all
