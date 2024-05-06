# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpelc <vpelc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 11:09:54 by vpelc             #+#    #+#              #
#    Updated: 2024/04/25 21:31:26 by vpelc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

AR = ar rc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

#SOURCE = 

#SOURCE_BONUS = 

SOURCES = $(addsuffix .c, ${SOURCE})

SOURCES_BONUS = $(addsuffix _bonus.c, ${SOURCE_BONUS})

OBJECTS = ${SOURCES:.c=.o}

OBJECTS_BONUS = ${SOURCES_BONUS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -I libft.h -c $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
		${AR} ${NAME} ${OBJECTS}

all:	${NAME}

clean:
		${RM} ${OBJECTS} ${OBJECTS_BONUS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

bonus: 		${OBJECTS_BONUS}
		${AR} ${NAME} ${OBJECTS_BONUS}
		
.PHONY: all clean fclean re bonus 