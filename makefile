# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysong <ysong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 06:44:16 by ysong             #+#    #+#              #
#    Updated: 2021/09/04 01:05:32 by ysong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCDIR		=	src/
SRC			=	main.c show_utils.c signal_utils.c parse_utils.c

# MSRC		=	src/main.c

INCLUDE 	= ./includes/

LIBDIR = ./libft/
LIBNAME = libft.a

SRCS	= $(addprefix $(SRCDIR), $(SRC))

OBJS			= $(SRCS:.c=.o)
# MOBJS			= $(MSRC:.c=.o)

%.o:		%.c
			$(CC) $(CFLAGS) -g -I$(INCLUDE) -c $< -o $@

$(NAME):	$(LIBNAME) $(OBJS)
				$(CC) $(CFLAGS) -g -I$(INCLUDE) -o $(NAME) $(OBJS) $(LIBNAME)

$(LIBNAME):
				@$(MAKE) -C $(LIBDIR) bonus
				@cp $(addprefix $(LIBDIR), $(LIBNAME)) $(LIBNAME)
all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME) $(LIBNAME)
			@$(MAKE) -C $(LIBDIR) fclean

re:			fclean $(NAME)


.PHONY:			all clean fclean re bonus