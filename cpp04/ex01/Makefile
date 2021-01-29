NAME = game
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = AWeapon.hpp Character.hpp Enemy.hpp PlasmaRifle.hpp PowerFist.hpp RadScorpion.hpp SuperMutant.hpp

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
