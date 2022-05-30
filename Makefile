##
## EPITECH PROJECT, 20121
## Makefile
## File description:
## Malloc_project
##

SRC		=	src/malloc.c  \
			src/other.c  \

CFLAGS	=	-Wall -Wextra -g3 -fPIC

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy_malloc.so

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -fPIC -shared -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re