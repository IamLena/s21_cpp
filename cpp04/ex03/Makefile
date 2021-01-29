NAME = game
CC = clang++
FLAGS = -Wall -Wextra -Werror

SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

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
