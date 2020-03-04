##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

SRC	= 	my_cat.cpp

NAME = my_cat

CC	= g++

RM	= rm -f

OBJ	= $(SRC:.cpp=.o)

CFLAGS	+= -Wextra -Werror -Wall -std=c++11

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re