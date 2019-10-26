# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquamar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 22:43:30 by aquamar           #+#    #+#              #
#    Updated: 2019/10/26 02:31:01 by aquamar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
HEADERS=libft.h
SRC=ft_strlen.c ft_memset.c	ft_memmove.c  ft_isprint.c ft_strrchr.c ft_strchr.c ft_memcpy.c ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_isupper.c ft_islower.c \
	ft_memcmp.c ft_memccpy.c ft_strlcpy.c ft_strlcat.c ft_memchr.c ft_strnstr.c ft_toupper.c ft_tolower.c ft_atoi.c ft_iswhitespace.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_strncmp.c ft_iswhitespace.c ft_strjoin.c  ft_strtrim.c ft_split.c ft_itoa.c  ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c  \
	ft_putnbr_fd.c ft_strdup.c ft_substr.c ft_calloc.c \
	 ft_putendl_fd.c 
OBJ=$(SRC:.c=.o)
all:	$(NAME)
$(NAME):
		gcc -Wall -Werror -Wextra  -c $(SRC)
		ar -rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
		/bin/rm -f *.o 
fclean:	clean
		rm -f $(NAME)
re:	fclean all
bonus :
