# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 13:50:51 by brandebr          #+#    #+#              #
#    Updated: 2024/09/12 14:52:14 by brandebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ManyBraiiiiiiinnnzzzZ

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ_DIR = obj/
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

# Compile .o files from .cpp files, ensuring the directory exists
$(OBJ_DIR)%.o: %.cpp Makefile
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

# Link the .o files into the final executable
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

valgrind: $(NAME)
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)  13 Boo

exit: $(NAME)
	@leaks --atExit -- ./ManyBraiiiiiiinnnzzzZ 3 Boo

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -rf $(OBJ_DIR)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

