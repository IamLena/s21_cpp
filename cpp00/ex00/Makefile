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
	rm -f $(OBJS) res

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME) "shhhhh... I think the students are asleep..." > res
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off." >> res
	./$(NAME) >> res
	diff res subject
