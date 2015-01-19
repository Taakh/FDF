# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmangili <rmangili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/19 21:32:31 by rmangili          #+#    #+#              #
#    Updated: 2015/01/19 21:34:06 by rmangili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = cc
LIB_NAME = ft
LIBDIR = libft
FLAGS = -g -Wall -Wextra -Werror

SOURCES = main.c get_next_line.c draw.c pars.c color.c tools.c
OBJECTS = $(SOURCES:.c=.o)


.PHONY: all clean fclean re

$(NAME): $(LIBDIR)/lib$(LIB_NAME).a $(OBJECTS)
	$(CC) -L $(LIBDIR) -l $(LIB_NAME) $+ -o $@ -L/usr/X11/lib -lmlx -lXext -lX11

$(LIBDIR)/lib$(LIB_NAME).a : 
	$(MAKE) -C $(LIBDIR)

all: $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
