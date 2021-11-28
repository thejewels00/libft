SRCS = *.c;
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJS = *.o

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar -rc $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
run: gcc $(FLAGS) main.c libft.aSRCS = *.c;
