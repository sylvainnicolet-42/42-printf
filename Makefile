# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 20:11:00 by synicole          #+#    #+#              #
#    Updated: 2022/10/22 14:52:16 by synicole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME		= libftprintf.a
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs
A_OUT		= a.out

# SOURCES
SRC_FILES	=	ft_printf \
				ft_formats \
				ft_print_char \
				ft_print_percent \
				ft_print_str \
				ft_print_nbr \
				ft_print_hex
SRC 		= 	${addprefix ${SRC_DIR}, ${addsuffix .c, ${SRC_FILES}}}
OBJ 		= 	${addprefix ${OBJ_DIR}, ${addsuffix .o, ${SRC_FILES}}}
OBJF		=	.cache_exists

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

all:		${NAME}

${NAME}:	${OBJ}
			@make -C ${LIBFT}
			@cp libft/libft.a .
			@mv libft.a ${NAME}
			@${AR} ${NAME} ${OBJ}
			@echo "${_IGREEN}ft_printf compiled!${_END}"

${OBJ_DIR}%.o: ${SRC_DIR}%.c | ${OBJF}
			@echo "${_IYELLOW}Compiling: $< ${_END}"
			@${CC} ${CFLAGS} . -c $< -o $@

${OBJF}:
			@mkdir -p ${OBJ_DIR}

clean:
			@${RM} -rf ${OBJ_DIR}
			@make clean -C ${LIBFT}
			@echo "${_IBLUE}ft_printf: object files cleaned!${_END}"

fclean:		clean
			@${RM} ${NAME}
			@${RM} ${LIBFT}/libft.a
			@${RM} ${A_OUT}
			@echo "${_ICYAN}ft_printf: executable files cleaned!${_END}"
			@echo "${_ICYAN}libft: executable files cleaned!${_END}"

re:			fclean all
			@echo "${_IGREEN}ft_printf : clean and rebuild!${_END}"

run:		all
			@${CC} ${CFLAGS} ${SRC_DIR}/ft_printf.c -L. -lftprintf
			@./${A_OUT}

.PHONY:		all clean fclean re
