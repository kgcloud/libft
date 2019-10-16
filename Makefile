# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnjuguna <cnjuguna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 21:36:47 by cnjuguna          #+#    #+#              #
#    Updated: 2019/10/16 21:47:18 by cnjuguna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror -O3

RM=rm -f

SRC= ft_atoi.c \
ft_isalnum.c \
ft_isdigit.c \
ft_memccpy.c \
ft_memcpy.c \
ft_putchar_fd.c \ 
ft_putstr.c \     
ft_strdup.c \     
ft_strmapi.c \    
ft_strrchr.c \    
ft_tolower.c \
ft_bzero.c \      
ft_isalpha.c \    
ft_isprint.c \    
ft_memchr.c \     
ft_memmove.c \    
ft_putendl_fd.c \ 
ft_split.c \      
ft_strjoin.c \    
ft_strncmp.c \    
ft_strtrim.c \    
ft_toupper.c \
ft_calloc.c \
ft_isascii.c \    
ft_itoa.c \       
ft_memcmp.c \     
ft_memset.c \     
ft_putnbr_fd.c \  
ft_strchr.c \     
ft_strlen.c \     
ft_strnstr.c \    
ft_substr.c \

OBJ=$(SRC:.c=.o)

$(NAME): includes/libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean