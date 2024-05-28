# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 11:09:54 by vpelc             #+#    #+#              #
#    Updated: 2024/05/21 18:44:38 by vpelc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SOURCE = printf printf_char printf_hex printf_str printf_int printf_uint printf_ptr printf_utils printf_flag_bonus

SOURCES = $(addsuffix .c, ${SOURCE})

OBJECTS = ${SOURCES:.c=.o}

all:	${NAME} 

bonus : all

.c.o:
		${CC} ${CFLAGS} -I ./ -c $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
		${AR} ${NAME} ${OBJECTS}

clean:
		${RM} ${OBJECTS} 

fclean:		clean
		${RM} ${NAME} 

re:		fclean all
	
.PHONY: all clean fclean re bonus 