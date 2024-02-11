# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avoloshc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 20:13:37 by avoloshc          #+#    #+#              #
#    Updated: 2024/01/28 23:26:57 by bgebetsb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define compiler
CC = cc

# Define flags
CFLAGS = -Wall -Wextra -Werror

# Define the name of the executable
NAME = rush-02

# Define source files
SRC = rush02.c file_parsing.c file_parsing2.c print2.c print.c str_funcs2.c str_funcs.c

# Define object files
OBJ = $(SRC:.c=.o)

# Rule for making the final executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Rule for cleaning up
clean:
	rm -f $(OBJ)

# Rule for removing executable and cleaning up
fclean: clean
	rm -f $(NAME)
