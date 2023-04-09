NAME = push_swap.a

SOURCES = ft_atoi.c main.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJECTS)
		$(AR) -rc $@ $?
%.o: %.c 
		$(CC) $(CFLAGS) -c $? -g3
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test