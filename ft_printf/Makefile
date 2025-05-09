# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgodoy-m <jgodoy-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 15:31:07 by jgodoy-m          #+#    #+#              #
#    Updated: 2025/05/09 16:20:23 by jgodoy-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library file name
NAME = libftprintf.a

# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = ft_printf.c ft_conversion.c ft_conversion2.c
OBJ = $(SRC:.c=.o)

# Header file
INCLUDE = ft_printf.h

# Create libraries and delete files
AR = ar rcs
RM = rm -f

# Indicates that the following rules are not real files
.PHONY: all bonus clean fclean re

# Rule that compiles everything by default
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	$(AR) $@ $^

# Convert .c files to .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Rule to delete all created object files
clean:
	$(RM) $(OBJ)

# Delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all
