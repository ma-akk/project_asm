SRCS		= ft_strcpy.s ft_strcmp.s ft_strlen.s ft_strdup.s ft_read.s ft_write.s

OBJS		= ${SRCS:.s=.o}

NAME		= libasm.a

FLAGS		= -f macho64

HEADER		= libasm.h

EXE			= libasm

%.o:		%.s
			nasm ${FLAGS} $<

all:		${NAME}

$(NAME):	${OBJS} ${HEADER}
			ar rc  ${NAME} ${OBJS}
			ranlib ${NAME}

main:		$(NAME)
			gcc -Wall -Wextra -Werror ${NAME} main.c -o ${EXE}
			./${EXE}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME} ${EXE}

re:			fclean all

.PHONY:		all clean fclean re 
