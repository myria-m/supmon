CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = supmon

SRCS =	main.c\
		joueur.c

HEADERS = supmon.h

OBJECT = $(SRCS:.c=.o)

$(NAME): ${OBJECT}
	$(CC) $(FLAGS) $(MLXLIB) -o $(NAME) ${OBJECT} 

all:	$(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY:	re clean fclean all