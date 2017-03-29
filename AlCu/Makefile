#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: sdahan <sdahan@gmail.com>                  +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2015/07/31 19:12:53 by sdahan            #+#    #+#             *#
#*   Updated: 2015/12/19 22:05:17 by sdahan           ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = alum1

H_DIR = h/
O_DIR = o/
C_DIR = srcs/
LIBFT = libft/

FLAGS = -Wall -Werror -Wextra
LINKS = -I$(H_DIR) -I$(LIBFT)

C_FILES = $(shell ls -1 $(C_DIR) | grep "\.c")

O_FILES = $(addprefix $(O_DIR), $(C_FILES:.c=.o))

all:
	@make -C $(LIBFT)
	@make $(NAME)

$(NAME): $(O_FILES)
	@gcc $(FLAGS) -o $@ $^ $(LINKS) -L$(LIBFT) -lft \
	&& printf "\033[0;32m" || printf "\033[0;31m"

$(O_DIR)%.o: $(C_DIR)%.c
	@mkdir $(O_DIR) 2> /dev/null || echo "" > /dev/null
	@gcc $(FLAGS) $(LINKS) -o $@ -c $< \
	&& printf "\033[0;0m%-24s\033[1;30m-->>	\033[0;32m$@\033[0;0m\n" "$<" \
	|| (printf "\033[0;0m%-24s\033[1;30m-->>	\033[0;31m$@\033[0;0m\n" "$<" \
	&& exit 1)

clean :
	@rm -rf $(O_FILES) 2> /dev/null || echo "" > /dev/null
	@rmdir -p $(O_DIR) 2> /dev/null || echo "" > /dev/null
	@make -C $(LIBFT) clean

fclean: clean
	@rm -rf $(NAME) 2> /dev/null
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY: clean fclean 
