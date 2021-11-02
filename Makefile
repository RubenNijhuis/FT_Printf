NAME = ft_printf.a
SRC = ft_printf.c ft_putchar.c ft_check_type.c
OFILES = $(SRC:.c=.o)
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror
COMPILER = $(CC) $(CFLAGS)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

%.o: %.c
	$(COMPILER) $? -o $@


re: fclean all

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)