#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgodoy-m <jgodoy-m@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 15:31:07 by jgodoy-m          #+#    #+#              #
#    Updated: 2025/05/07 16:05:18 by jgodoy-m         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Library file name
NAME = libft.a

# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c
OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

# Header file
INCLUDE = libft.h

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

# Rule for compiling bonus functions
bonus: $(OBJ) $(BONUSOBJ)
	$(AR) $(NAME) $^

# Rule to delete all created object files
clean:
	$(RM) $(OBJ) $(BONUSOBJ)

# Delete all .o and .a files
fclean: clean
	$(RM) $(NAME)

re: fclean all
