##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## tests
##

NAME_TESTS	=	unit_tests

SRCS		=	Box.cpp				\
				GiftPaper.cpp		\
				LittlePony.cpp		\
				Object.cpp			\
				Teddy.cpp			\
				Toy.cpp				\
				Wrap.cpp			\
				tests/test_toy.cpp	\
				tests/test_wrap.cpp	\

RM		=	rm -f

CXXFLAGS	=	-I./tests/include -W -Wall -Wextra -fprofile-arcs -ftest-coverage

OBJS	=	$(SRCS:.cpp=.o)

LDFLAGS	=	--coverage -lcriterion

DEL =   $(SRCS:%.cpp=%.gcno) \
        $(SRCS:%.cpp=%.gcda) \

CC	=	c++

clean:
	$(RM) $(OBJS)
	$(RM) $(DEL)

fclean: clean
	$(RM) $(NAME_TESTS)

tests_run: fclean $(OBJS)
	$(CC) -o $(NAME_TESTS) $(OBJS) $(LDFLAGS)
	./unit_tests

.PHONY: clean fclean tests_run