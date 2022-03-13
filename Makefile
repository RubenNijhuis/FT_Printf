# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rubennijhuis <rubennijhuis@student.coda      +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/13 16:51:02 by rubennijhui   #+#    #+#                  #
#    Updated: 2022/03/13 20:31:09 by rubennijhui   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME := ft_printf
INCLUDE_DIR := include
SRC_DIR := src
OBJS_DIR := objs
OUTPUT := $(NAME).a

#=====================================#
#============ Input files ============#
#=====================================#

INC := -I $(INCLUDE_DIR)

SRCS := ft_putstr.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_printf.c \
		ft_putnbr_unsigned.c \
		ft_num_to_hex.c \

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g $(INC)
LDFLAGS =

#=====================================#
#=============== Rules ===============#
#=====================================#

objs/%.o:src/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $(CFLAGS) -o $@ $^
	@echo "🔨 Compiling: $^"
	
all: $(NAME)

$(NAME): $(OBJS)
	@ar -cr $(OUTPUT) $(OBJS)
	@echo "✅ Built $(NAME) \n"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "🧹 Done cleaning $(NAME) objects"

fclean: clean
	@rm -f $(OUTPUT)
	@echo "🧹 Done cleaning $(NAME) archive \n"

re: fclean all

.PHONY: all re clean fclean
