# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchennak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 21:20:25 by jchennak          #+#    #+#              #
#    Updated: 2021/11/29 21:21:26 by jchennak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCF = ft_strdup.c \
	  ft_strjoin.c \
	  ft_atoi.c \
	  ft_strlcat.c \
	  ft_bzero.c \
	  ft_strlcpy.c \
	  ft_calloc.c \
	  ft_strlen.c \
	  ft_isalnum.c \
	  ft_memchr.c \
	  ft_strmapi.c \
	  ft_isalpha.c \
	  ft_memcmp.c \
	  ft_strncmp.c \
	  ft_isascii.c \
	  ft_memcpy.c \
	  ft_strnstr.c \
	  ft_isdigit.c \
	  ft_memmove.c \
	  ft_strrchr.c \
	  ft_isprint.c \
	  ft_memset.c \
	  ft_strtrim.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_substr.c \
	  ft_putendl_fd.c \
	  ft_tolower.c \
	  ft_putnbr_fd.c \
	  ft_toupper.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_striteri.c \

#nommage automatique des fichier .o avec les noms de src file
all : ${NAME}
	
OBJ = ${SRCF:.c=.o}

# compiler qvec les flag et cree les .o 

${NAME} : ${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean :
	rm -rf ${OBJ} 

fclean : clean
	rm -rf ${NAME}

re : fclean all

