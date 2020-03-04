##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

SRC	= z.c

CC	= gcc

RM	= rm -f

OBJ	= $(SRC:.c=.o)

NAME	= z

CFLAGS	+= -Wextra -Werror -Wall -std=gnu99

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re