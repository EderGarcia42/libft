# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegarci <edegarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 10:37:09 by edegarci          #+#    #+#              #
#    Updated: 2024/04/17 12:50:06 by edegarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# VARIABLES                                                                    #
# NAME: Define el nombre de la biblioteca que se creará (libft.a).             #
NAME = libft.a
# CC: Especifica el compilador a usar (gcc).                                   #
CC = cc
# CCFLAGS: Define las opciones del compilador (-Wall -Wextra -Werror).         #
CCFLAGS = -Wall -Wextra -Werror
# RM: Comando para eliminar archivos (rm -rf).                                 #
RM = rm -rf
# SRCS: Lista los archivos fuente (.c) que forman parte de la biblioteca.      #
SRCS =	ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_substr.c\

#		ft_malloc.c\
		2_ft_itoa.c\
		2_ft_lstadd_back.c\
		2_ft_lstadd_front.c\
		2_ft_lstclear.c\
		2_ft_lstdelone.c\
		2_ft_lstiter.c\
		2_ft_lstlast.c\
		2_ft_lstmap.c\
		2_ft_lstnew.c\
		2_ft_lstsize.c\
		2_ft_split.c\
		2_ft_striteri.c\
		2_ft_strmapi.c\
		2_ft_strjoin.c\
		2_ft_strtrim.c\ 
		
# OBJS: Variable que genera una lista de archivos objeto (.o)                  #
#       a partir de los archivos fuente (.c).                                  #
OBJS = $(SRCS:.c=.o)

# **************************************************************************** #

# **************************************************************************** #
# REGLAS                                                                       #
# $(NAME) : $(OBJS): Al crear la biblioteca (libft.a), se necesitan los 
# 			archivos objeto ($(OBJS)).                        				   #
#           La acción @ar crs $(NAME) $(OBJS) utiliza el comando ar para crear #
#           un archivo de biblioteca estática (lib.a) con los archivos objeto  #
#           especificados.                                                     #
$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)
# all: Alias para la regla $(NAME).                           				   #
#      Cuando se ejecuta make all, se crea la biblioteca.                      #
all: $(NAME)
# %.o : %.c: Esta regla indica cómo compilar cada archivo fuente (.c)          # 
#            en un archivo objeto (.o).                                        #
#            La acción @$(CC) $(CCFLAGS) -c -o $@ $< utiliza el compilador gcc #
#            con las opciones -Wall -Wextra -Werror para compilar el archivo   #
#            fuente ($<) y generar el archivo objeto ($@).                     #
%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
# clean: Elimina los archivos objeto (.o) generados durante la compilación.	   #
clean:
	@$(RM) $(OBJS)
# fclean: Elimina la biblioteca (libft.a) y los archivos objeto (.o).		   #
fclean: clean
	@rm -f $(NAME)
# re: Alias para la secuencia fclean all.                     				   #
#     Cuando se ejecuta make re, se limpia la compilación anterior             #
#     y se crea la biblioteca nuevamente.                                      #
re: fclean all
# **************************************************************************** #

# **************************************************************************** #
# PHONY: all, clean, fclean y re son pseudo-objetivos,              #
#        no archivos reales.                                                   #
.PHONY: all clean fclean re
# **************************************************************************** #
