# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/05 19:20:35 by hladeiro          #+#    #+#              #
#    Updated: 2025/04/08 21:55:32 by hladeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = area
CXX = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJ = $(SRC:.cpp=.o)


%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

all : $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(FLAGS)

clean:
	@rm -f $(OBJ)
	@echo "Objects Removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all
