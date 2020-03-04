##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

SRC	= 	my_convert_temp.cpp

NAME = my_convert_temp

CC	= g++

RM	= rm -f

OBJ	= $(SRC:.cpp=.o)

CXXFLAGS	+= -Wextra -Werror -Wall -std=c++11

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CXXFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re