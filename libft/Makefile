# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghun <seunghun@student.42.kr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 16:30:04 by seunghun          #+#    #+#              #
#    Updated: 2023/10/16 18:44:21 by seunghun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

AR			=	ar
ARFLAGS		=	rcs

SRCS		=	ft_isdigit.c	ft_memmove.c		\
				ft_strchr.c		ft_strmapi.c		\
				ft_toupper.c	ft_atoi.c			\
				ft_isprint.c	ft_memset.c			\
				ft_strdup.c		ft_strncmp.c		\
				ft_bzero.c		ft_itoa.c			\
				ft_putchar_fd.c	ft_striteri.c		\
				ft_strnstr.c	ft_calloc.c			\
				ft_putendl_fd.c	ft_strjoin.c		\
				ft_strrchr.c	ft_isalnum.c		\
				ft_memchr.c		ft_putnbr_fd.c		\
				ft_strlcat.c	ft_strtrim.c		\
				ft_isalpha.c	ft_memcmp.c			\
				ft_putstr_fd.c	ft_strlcpy.c		\
				ft_substr.c		ft_isascii.c		\
				ft_memcpy.c		ft_split.c			\
				ft_strlen.c		ft_tolower.c

SRCSBONUS	=	ft_lstnew.c			ft_lstadd_front.c	\
				ft_lstadd_back.c	ft_lstiter.c		\
				ft_lstclear.c		ft_lstdelone.c		\
				ft_lstlast.c		ft_lstsize.c		\
				ft_lstmap.c

OBJS		=	$(SRCS:.c=.o)

OBJSBONUS	=	$(SRCSBONUS:.c=.o)

ifdef WITH_BONUS
	OBJ_FILE = $(OBJS) $(OBJSBONUS)
else
	OBJ_FILE = $(OBJS)
endif

all : $(NAME)
	sleep 1

$(NAME) : $(OBJ_FILE)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus :
	@make WITH_BONUS=1 all

clean :
	$(RM) $(OBJS) $(OBJSBONUS)
fclean : clean
	$(RM) $(NAME)
re : fclean all

.PHONY : all bonus clean fclean re
