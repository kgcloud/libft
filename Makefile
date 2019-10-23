# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 21:36:47 by cnjuguna          #+#    #+#              #
#    Updated: 2019/10/24 01:15:31 by cnjuguna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=		gcc

CFLAGS=-Wall -Wextra -Werror -O3

RM=		rm -f

SRC=	ft_isdigit.c \
		ft_memset.c \
		ft_strdup.c \
		ft_substr.c \
		ft_isprint.c \
		ft_putchar_fd.c \
		ft_strjoin.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_putendl_fd.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_isalnum.c \
		ft_memcmp.c \
		ft_putstr_fd.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_split.c \
		ft_strrchr.c \
		ft_isascii.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strtrim.c \
		ft_strlcat.c \
		ft_strlcpy.c

OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ) libft.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean
