CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isprint.c \
ft_memset.c \
ft_strtrim.c \
ft_strjoin.c \
ft_atoi.c \
ft_itoa.c \
ft_lstnew.c \
ft_putchar_fd.c \
ft_strlcat.c \
ft_substr.c \
ft_bzero.c \
ft_lstadd_back.c \
ft_lstsize.c \
ft_putendl_fd.c \
ft_strlcpy.c \
ft_tolower.c \
ft_calloc.c \
ft_lstadd_front.c \
ft_memccpy.c \
ft_putnbr_fd.c \
ft_strlen.c \
ft_toupper.c \
ft_isalnum.c \
ft_lstclear.c \
ft_memchr.c \
ft_putstr_fd.c \
ft_strmapi.c \
ft_isalpha.c \
ft_lstdelone.c \
ft_memcmp.c \
ft_split.c \
ft_strncmp.c \
ft_isascii.c \
ft_lstiter.c \
ft_memcpy.c \
ft_strchr.c \
ft_strnstr.c \
ft_isdigit.c \
ft_lstlast.c \
ft_memmove.c \
ft_strdup.c \
ft_strrchr.c \

OBJS = ${SRCS:.c=.o}

NAME = libft.a

LINK = ar rc

$(NAME):		$(OBJS)
	$(LINK)		$(NAME) 	$(OBJS)

all:		$(NAME)

so:	all
	${CC} ${CFLAGS} ${INCLUDES} -fPIC -c ${SRCS}
	${CC} -shared -o libft.so ${OBJS}

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
			rm -rf *.so

re:			fclean all

.PHONY: all clean fclean re
