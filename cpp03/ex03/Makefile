CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = ClapTrap.cpp main.cpp FragTrap.cpp DiamondTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = a.out

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re