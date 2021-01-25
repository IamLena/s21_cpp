NAME = megaphone
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) res subject

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	@echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\nDAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n* LOUD AND UNBEARABLE FEEDBACK NOISE *" > subject

	./$(NAME) "shhhhh... I think the students are asleep..." > res
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." >> res
	./$(NAME) >> res
	diff res subject

.PHONY: all clean fclean re test
