NAME = game
CC = clang++
FLAGS = -Wall -Wextra -Werror

SRC = Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Squad.hpp TacticalMarine.hpp AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: re fclean clean all
