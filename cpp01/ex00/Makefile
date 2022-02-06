NAME =		main

SRCS =		Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)
CC =		clang++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

debug:		$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -fsanitize=address -o $@

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			clean fclean all

.PHONY:		all clean fclean re
