NAME = push_swap

SOURCES = ft_calloc.c main.c ft_split.c instructions.c list_moves.c\
			parser.c parser_utils_1.c utils.c init_sort.c sort.c\
			instructions_2.c instructions_3.c utils_2.c\

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME): $(OBJECTS)
		$(MAKE) -C ft_printf
		$(CC) $(CFLAGS) ft_printf/libftprintf.a $(OBJECTS) -o $(NAME)
%.o: %.c 
		$(CC) $(CFLAGS) -c $? -g3
clean:
		rm -f $(OBJECTS)
		$(MAKE) -C ft_printf clean

fclean: clean
		rm -f $(NAME)
		$(MAKE) -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re test