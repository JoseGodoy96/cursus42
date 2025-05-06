# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 15:31:07 by jgodoy-m          #+#    #+#              #
#    Updated: 2025/05/06 14:28:48 by jgodoy-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo biblioteca
NAME = libftprintf.a

# Compilador y banderas de compilacion
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = 
OBJ = $(SRC:.c=.o)

# Archivo de encabezado
INCLUDE = ft_printf.h

# Crea bibliotecas y elimina archivos
AR = ar rcs
RM = rm -f

# Indica que las siguientes reglas no son archivos reales
.PHONY: all bonus clean fclean re

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
