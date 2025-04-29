# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 15:31:07 by jgodoy-m          #+#    #+#              #
#    Updated: 2025/04/27 17:11:03 by jgodoy-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo biblioteca
NAME = libft.a

# Compilador y banderas de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

# Archivo de encabezado
INCLUDE = libft.h

# Crea bibliotecas y elimina archivos
AR = ar rcs
RM = rm -f

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re

# Regla que por defecto compila todo
all: $(NAME)

# Regla para crear la biblioteca
$(NAME): $(OBJ)
	$(AR) $@ $^

# Pasar archivos .c a .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Regla para eliminar todos los archivos objeto creados
clean:
	$(RM) $(OBJ)

# Eliminar todos los archivos .o y .a
fclean: clean
	$(RM) $(NAME)

re: fclean all
