## primes_generator
## File description:
## Makefile
##

SRC	=	./sources/main.c
OBJ	=	$(SRC:.c=.o)

NAME	=	fazzbizz
CFLAGS	=	-Wall -Wextra
CC	=	gcc
RM	?= rm -f
all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
re: all

.PHONY: all $(NAME) clean fclean re
