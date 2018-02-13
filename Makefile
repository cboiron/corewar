#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/13 18:10:12 by abrichar          #+#    #+#              #
#    Updated: 2018/02/13 18:11:10 by abrichar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = corewar

CFLAG = -Wall -Wextra -Werror
CPPFLAGS = -Iincludes

SRC_NAME = main.c

OBJ_NAME = $(SRC_NAME:.c=.o)
SRC_PATH = src
OBJ_PATH = obj
INC_PATH = includes

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@gcc $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJ_PATH)
	@rm -rf libft/obj

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT)

re: fclean all

norme:
	norminette $(SRC)
	norminette ./includes/corewar.h
