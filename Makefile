# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rnijhuis <rnijhuis@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/08 13:03:58 by rnijhuis      #+#    #+#                  #
#    Updated: 2021/11/09 13:27:02 by rnijhuis      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_putchar.c \
		ft_num_to_hex.c \
		ft_printf.c \
		ft_putnbr.c \
		ft_putnbr_unsigned.c \
		ft_putstr.c \

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

%.o : %.c ft_printf.h
	@$(CC) $(FLAGS) -c $<
	@echo "🔨 Compiling: $<"

$(NAME): $(OBJS)
	@ar -cr $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS) $(OBJS_B)
	@echo "🧹  Done cleaning objects"

fclean: clean
	@rm -f $(NAME)
	@echo "🧹  Done cleaning archive"

re: fclean all
