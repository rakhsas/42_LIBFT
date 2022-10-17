# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:03:18 by rakhsas           #+#    #+#              #
#    Updated: 2022/10/17 02:51:33 by rakhsas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalnum.c  	\
		ft_isalpha.c  	\
		ft_isdigit.c   	\
		ft_isprint.c  	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memmove.c	\
		ft_strlen.c		\
		ft_memset.c		\
		ft_isascii.c	\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c

GCC = gcc

FLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

RM = rm -f

LIB = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS)
			$(LIB) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

.c.o : 
	$(GCC) $(FLAGS) -c $<

fclean : clean
			$(RM) $(NAME)

re : fclean all