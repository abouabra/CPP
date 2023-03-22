SRC = phonebook.cpp

OSRC=$(SRC:.c=.o)

NAME= phonebook
INCLUDE = -I .

all: $(NAME)

$(NAME): $(OSRC) 
	@c++ -Wall -Wextra -Werror $(INCLUDE) $^ -o $@

%.o : %.c
	@c++ -Wall -Wextra -Werror -c $<

clean:
	@rm -rf *.o

fclean:
	@rm -rf *.o $(NAME)

re:fclean all

.PHONY: all clean fclean re