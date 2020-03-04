##
## EPITECH PROJECT, 2019
## makefile
## File description:
## Makefile all unit_tests
##

SRC		=	new.c		\
			player.c	\
			vertex.c	\
			point.c		\
			float.c

SRC_TEST	= tests/test_rush.c

OBJ		=	$(SRC:.c=.o)

BIN		=	unit_tests

CC		=	gcc

LDFLAGS	=	-lcriterion --coverage

all:	tests_run

tests_run:
		$(CC) -o $(BIN) $(SRC) $(SRC_TEST) $(LDFLAGS)
		./$(BIN)

clean:
		rm -f $(OBJ)
		rm -f *.gc*

fclean:		    clean
		rm -f $(BIN)