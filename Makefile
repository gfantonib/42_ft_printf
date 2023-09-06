NAME = libftprintf.a

LIBFT_NAME = libft/libft.a
LIBFT_PATH = libft
CFLAGS = -Wall -Wextra -Werror -g
IFLAGS = -Iinc -Ilibft/inc
CC = gcc
MK = mkdir -p

SOURCES = \
	src/ft_printf.c

OBJECTS_DIR = objs
OBJECTS = $(addprefix $(OBJECTS_DIR)/, $(SOURCES:%.c=%.o))

all: $(LIBFT_NAME) $(NAME)


$(OBJECTS_DIR)/%.o: %.c
	$(MK) $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT_NAME):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJECTS)
	ar rcsT $(NAME) $(OBJECTS) $(LIBFT_NAME) $?
	
clean:
	make clean -C $(LIBFT_PATH)
	rm -rf $(OBJECTS_DIR)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
