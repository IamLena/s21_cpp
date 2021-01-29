NAME = sorcerer
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Peon.cpp Victim.cpp Sorcerer.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Peon.hpp Victim.hpp Sorcerer.hpp

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
