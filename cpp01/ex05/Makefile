NAME = human
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Brain.cpp Human.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Brain.hpp Human.hpp

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
