# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysong <ysong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/02 06:44:16 by ysong             #+#    #+#              #
#    Updated: 2021/09/04 14:14:45 by ysong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCDIR		=	src/
SRC			=	main.c show_utils.c signal_utils.c parse_utils.c \
				run_commend.c

RUNDIR		=	run/
RRC			=	run_echo.c run_env.c run_pwd.c
# MSRC		=	src/main.c

INCLUDE 	= ./includes/

LIBDIR = ./libft/
LIBNAME = libft.a

RRDIR	= $(addprefix $(SRCDIR), $(RUNDIR))
RRCS	= $(addprefix $(RRDIR), $(RRC))


SRCS	= $(addprefix $(SRCDIR), $(SRC))


OBJS			= $(SRCS:.c=.o)
OBJS_RUN		= $(RRCS:.c=.o)

# MOBJS			= $(MSRC:.c=.o)

%.o:		%.c
			$(CC) $(CFLAGS) -g -I$(INCLUDE) -c $< -o $@

$(NAME):	$(LIBNAME) $(OBJS) $(OBJS_RUN)
				$(CC) $(CFLAGS) -g -I$(INCLUDE) -o $(NAME) $(OBJS) $(OBJS_RUN) $(LIBNAME)

$(LIBNAME):
				@$(MAKE) -C $(LIBDIR) bonus
				@cp $(addprefix $(LIBDIR), $(LIBNAME)) $(LIBNAME)
all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJS_RUN)

fclean:		clean
			$(RM) $(NAME) $(LIBNAME)
			@$(MAKE) -C $(LIBDIR) fclean

re:			fclean $(NAME)


.PHONY:			all clean fclean re bonus