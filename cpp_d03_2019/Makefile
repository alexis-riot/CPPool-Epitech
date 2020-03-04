##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

SRC	= 	base.c\
		append.c\
		assign.c\
		at.c\
		clear.c\
		size.c\
		compare.c\
		copy.c\
		c_str.c\
		empty.c\
		find.c

CC	= gcc

RM	= rm -f

OBJ	= $(SRC:%.c=%.o)

NAME	= libstring.a

CFLAGS	= -iquote . -Wextra -Werror -Wall -std=gnu99 $(INCLUDE)

all	: $(NAME)

$(NAME)	: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re