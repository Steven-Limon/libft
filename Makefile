# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 21:35:05 by slimon            #+#    #+#              #
#    Updated: 2019/05/01 21:35:10 by slimon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
IDIR=./includes
CFLAGS=-I$(IDIR) -Wall -Wextra -Werror

SDIR=./srcs
SRC = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME):
	gcc -c $(SRC) $(CFLAGS)
	ar -rc $@ $(OBJ)
clean:
	rm -f ./*.o
fclean: clean
	rm -f $(NAME)
re: fclean all
