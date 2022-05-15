# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 16:23:44 by guilhermoma       #+#    #+#              #
#    Updated: 2022/05/15 12:26:31 by guilhermoma      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c		\
		ft_memset.c 	\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strnstr.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c		\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

BONUS =	ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		# ft_lstiter.c		\
		# ft_lstmap.c			\

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

.c.o:
		gcc -Wall -Wextra -Werror -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}
	
bonus:	${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all:	${NAME}

clean:
		rm -f ${OBJS} ${OBJSBONUS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all