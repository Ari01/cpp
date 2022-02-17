NAME =		template

SRC =		main.cpp

OBJS =		$(SRC:.cpp=.o)

CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $^ -o $@

debug:		$(OBJS)
			$(CC) $(CFLAGS) -g -fsanitize=address $^ -o $@

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME) .*.swp debug

re:			fclean all

.PHONY:		all re clean fclean


