NAME =		main

SRCS =		Zombie.cpp \
			ZombieHorde.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)
CC =		clang++
CFLAGS =	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

debug:		$(OBJS)
			$(CC) $(CFLAGS) -fsanitize=address $(OBJS) -o $@

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			clean fclean all

.PHONY:		all clean fclean re
