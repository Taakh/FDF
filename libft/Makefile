# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/14 13:23:40 by rmangili          #+#    #+#              #
#    Updated: 2014/11/26 18:43:30 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
ft_isalpha.c \
ft_isdigit.c \
ft_putchar.c \
ft_putnbr.c \
ft_strcat.c \
ft_strcmp.c \
ft_strdup.c \
ft_tolower.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_putendl.c \
ft_putstr.c \
ft_strchr.c \
ft_strcpy.c \
ft_strlen.c \
ft_toupper.c \
ft_strrchr.c \
ft_strclr.c \
ft_strncat.c \
ft_strncpy.c \
ft_strnew.c \
ft_putchar_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_striter.c \
ft_striteri.c \
ft_bzero.c \
ft_memset.c \
ft_memmove.c \
ft_memdel.c \
ft_memcpy.c \
ft_memalloc.c \
ft_memchr.c \
ft_memcmp.c \
ft_memccpy.c \
ft_strlcat.c \
ft_strtrim.c \
ft_strsub.c \
ft_strjoin.c \
ft_itoa.c \
ft_strdel.c \
ft_strequ.c \
ft_strnequ.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strstr.c \
ft_strsplit.c

OBJ = ft_atoi.o \
ft_isalpha.o \
ft_isdigit.o \
ft_putchar.o \
ft_putnbr.o \
ft_strcat.o \
ft_strcmp.o \
ft_strdup.o \
ft_tolower.o \
ft_isalnum.o \
ft_isascii.o \
ft_isprint.o \
ft_putendl.o \
ft_putstr.o \
ft_strchr.o \
ft_strcpy.o \
ft_strlen.o \
ft_toupper.o \
ft_strrchr.o \
ft_strclr.o \
ft_strncat.o \
ft_strncpy.o \
ft_strnew.o \
ft_putchar_fd.o \
ft_putnbr_fd.o \
ft_putstr_fd.o \
ft_striter.o \
ft_striteri.o \
ft_bzero.o \
ft_memset.o \
ft_memmove.o \
ft_memdel.o \
ft_memcpy.o \
ft_memalloc.o \
ft_memchr.o \
ft_memcmp.o \
ft_memccpy.o \
ft_strlcat.o \
ft_strtrim.o \
ft_strsub.o \
ft_strjoin.o \
ft_itoa.o \
ft_strdel.o \
ft_strequ.o \
ft_strnequ.o \
ft_strmap.o \
ft_strmapi.o \
ft_strncmp.o \
ft_strnstr.o \
ft_strstr.o \
ft_strsplit.o

FLAGS = -Wall -Werror -Wextra

$(NAME): all

all:
	gcc -c -I. $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf libft.a

re: fclean all
