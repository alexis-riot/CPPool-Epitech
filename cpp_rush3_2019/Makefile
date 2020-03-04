##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Automatic compilation
##

DISPLAY     = src/display
MODULE 		= src/module
COMPONENTS 	= $(MODULE)/components

SRC	= 	main.cpp							\
		$(DISPLAY)/MonitorDisplay.cpp		\
		$(MODULE)/MonitorModule.cpp			\
		$(COMPONENTS)/CGU.cpp				\
		$(COMPONENTS)/CPU.cpp				\
		$(COMPONENTS)/Meminfo.cpp			\
		$(COMPONENTS)/ExampleOverride.cpp	\
		$(COMPONENTS)/hostname.cpp			\
		$(COMPONENTS)/systemAndKernel.cpp	\
		$(COMPONENTS)/dateTime.cpp			\
		$(COMPONENTS)/network.cpp			\

NAME = mygkrellm

CC	= g++

RM	= rm -f

OBJ	= $(SRC:.cpp=.o)

CXXFLAGS	+= -Wextra -Werror -Wall -std=c++11 -lsfml-graphics -lsfml-window -lsfml-system

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -lncurses $(CXXFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re