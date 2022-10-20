# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:11:00 by synicole          #+#    #+#              #
#    Updated: 2022/10/20 20:11:04 by synicole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME	= libftprintf.a
OBJS		= ${SRCS:.c=.o}
GCC		= gcc
RM 		= rm -f
CFLAGS 	= -Wall -Werror -Wextra

# SOURCES
SRCS	= 	ft_printf.c \

# COLORS
# https://chezsoi.org/lucas/blog/colorez-les-sorties-de-vos-scripts-shell-unix.html
_END=$'\x1b[0m'
_BOLD=$'\x1b[1m'
_UNDER=$'\x1b[4m'
_REV=$'\x1b[7m'

_GREY=$'\x1b[30m'
_RED=$'\x1b[31m'
_GREEN=$'\x1b[32m'
_YELLOW=$'\x1b[33m'
_BLUE=$'\x1b[34m'
_PURPLE=$'\x1b[35m'
_CYAN=$'\x1b[36m'
_WHITE=$'\x1b[37m'

_IGREY=$'\x1b[40m'
_IRED=$'\x1b[41m'
_IGREEN=$'\x1b[42m'
_IYELLOW=$'\x1b[43m'
_IBLUE=$'\x1b[44m'
_IPURPLE=$'\x1b[45m'
_ICYAN=$'\x1b[46m'
_IWHITE=$'\x1b[47m'

.c.o:
			${GCC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
			@echo "${_IGREEN}ft_printf: clean and rebuild${_END}"

.PHONY: all clean fclean re
