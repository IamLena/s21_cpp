NAME = fragtrap
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = ClapTrap.cpp NinjaTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = ClapTrap.hpp NinjaTrap.hpp ScavTrap.hpp FragTrap.hpp

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
