NAME =		main

SRCS =		Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)
CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			clean fclean all

.PHONY:		all clean fclean re
