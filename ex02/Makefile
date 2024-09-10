# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 13:42:09 by brandebr          #+#    #+#              #
#    Updated: 2024/09/10 16:07:27 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi

SRC = main.cpp

OBJ_DIR = obj/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++

FLAGS  = -Wall -Wextra -Werror -std=c++98 -g -c 

all: Makefile $(NAME)

$(OBJ_DIR)%.o: %.cpp Makefile
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $<  -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

valgrind: $(NAME)
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(OBJ_DIR)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
