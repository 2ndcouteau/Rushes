# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pguillot <pguillot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 21:56:53 by pguillot          #+#    #+#              #
#    Updated: 2015/10/08 15:03:22 by pguillot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCP1 = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c

SRCP2 = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCBN = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
		ft_lstmap.c

SRCBNP = ft_lstaddend.c ft_lstlen.c ft_tablen.c ft_puttab.c ft_puttab_fd.c \
		 get_next_line.c ft_tabdup.c ft_tabdel.c

SRC = $(SRCP1) $(SRCP2) $(SRCBN) $(SRCBNP)

SRCO = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(SRCO)
	@echo "make[1]: library's compilation"
	@ar rc $(NAME) $(SRCO)
	@ranlib $(NAME)
	
$(SRCO):
	@echo "make[1]: source's compilation"
	@$(CC) -c $(SRC) $(CFLAGS) -I ./includes/

clean:
	@echo "make[1]: object's deletion"
	@rm -rf $(SRCO)

fclean: clean
	@echo "make[1]: library's deletion"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
