NAME =		diamondtrap

SRCS =		ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)
CC =		clang++
CFLAGS =	-Wall -Wextra -Werror -Wshadow -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME) .*.swp

re:			clean fclean all

.PHONY:		all clean fclean re
