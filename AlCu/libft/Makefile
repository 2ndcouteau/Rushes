# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdahan <sdahan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/08 14:07:21 by sdahan            #+#    #+#              #
#    Updated: 2015/09/08 14:07:45 by sdahan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

H_DIR = .
C_DIR = srcs/
O_DIR = o/

FLAGS = -Wall -Wextra -Werror
LINKS = -I$(H_DIR)

C_FILES = $(shell ls -1 $(C_DIR) | grep "\.c")
O_FILES = $(addprefix $(O_DIR), $(C_FILES:.c=.o))

all:
	@make $(NAME)

$(NAME): $(O_FILES)
	@ar rcs $@ $^ && printf "\033[0;32m" || printf "\033[0;31m"
	@printf "%-34s \033[1;30m<<--\033[0;0m\n" "$@"

$(O_DIR)%.o: $(C_DIR)%.c
	@mkdir $(O_DIR) 2> /dev/null || echo "" > /dev/null
	@gcc $(FLAGS) $(LINKS) -o $@ -c $< \
	&& printf "\033[0;0m%-34s\033[1;30m -->>\t\033[0;32m$@\033[0;0m\n" "$<" \
	|| (printf "\033[0;0m%-34s\033[1;30m -->>\t\033[0;31m$@\033[0;0m\n" "$<" \
		&& exit 1)

clean:
	@rm $(O_FILES) 2> /dev/null || echo "" > /dev/null
	@rmdir $(O_DIRS) $(O_DIR) 2> /dev/null || echo "" > /dev/null

fclean: clean
	@rm -rf $(NAME) 2> /dev/null || echo "" > /dev/null

re: fclean all

.PHONY: all clean fclean
