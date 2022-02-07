NAME =		brain

SRCS =		Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)
CC =		c++
CFLAGS =	-Wall -Wextra -Werror -Wshadow -std=c++98

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
			rm -rf $(NAME) .*.swp

re:			clean fclean all

.PHONY:		all clean fclean re
