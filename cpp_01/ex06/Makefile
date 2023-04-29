SRC = main.cpp  Harl.cpp

OSRC=$(SRC:.cpp=.o)

NAME= harlFilter
INCLUDE = -I .

all: $(NAME)

$(NAME): $(OSRC) 
	@c++ -Wall -Wextra -Werror $(INCLUDE) $^ -o $@

%.o : %.cpp
	@c++ -Wall -Wextra -Werror -c $<

clean:
	@rm -rf *.o

fclean:
	@rm -rf *.o $(NAME)

re:fclean all

.PHONY: all clean fclean re