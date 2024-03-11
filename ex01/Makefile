# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yachen <yachen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 14:21:49 by yachen            #+#    #+#              #
#    Updated: 2024/03/11 11:38:11 by yachen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Aaaaaand...OPEN!

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@echo "\e[32m\n==================================="
		@echo "\e[32mCompiling Aaaaaand...OPEN!----------------"
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "\e[32m---created with success : Aaaaaand...OPEN!"
		@echo "\e[32m===================================\n\e[0m"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning Aaaaaand...OPEN!----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----Aaaaaand...OPEN! Cleaned"
	@echo "\e[32m=====================\n\e[0m"

fclean:
	@echo "\e[32m\n====================="
	@echo "\e[32mCleaning Aaaaaand...OPEN!----"
	@rm -rf $(OBJ)
	@echo "\e[32m-----Aaaaaand...OPEN! Cleaned"
	@rm -rf $(NAME)
	@echo "\e[32m=====================\n\e[0m"

re: fclean all

.PHONY: clean fclean all re bonus
