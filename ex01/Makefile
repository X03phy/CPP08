# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebonutto <ebonutto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 17:06:54 by ebonutto          #+#    #+#              #
#    Updated: 2025/05/19 18:37:29 by ebonutto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CPPC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj/
SRC_DIR = src/
INC_DIR = include/

SRC = main.cpp \
	  Span.cpp
OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(OBJ_DIR)
	$(CPPC) $(CPPFLAGS) -I $(INC_DIR) -o $@ -c $< 

$(NAME): $(OBJ)
	$(CPPC) $(CPPFLAGS) $^ -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re