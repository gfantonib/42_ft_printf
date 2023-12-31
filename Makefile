NAME = libftprintf.a

LIBFT_NAME = libft/libft.a
LIBFT_PATH = libft
CFLAGS = -Wall -Wextra -Werror -g
IFLAGS = -Iinc -Ilibft/inc
CC = cc
MK = mkdir -p
SRC_PATH = src/

SOURCES = \
    ft_printf.c

OBJECTS_DIR = objs
OBJECTS = $(addprefix $(OBJECTS_DIR)/, $(SOURCES:%.c=%.o))

all: $(LIBFT_NAME) $(NAME)


$(OBJECTS_DIR)/%.o: $(SRC_PATH)%.c
	$(MK) $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT_NAME):
	make -C $(LIBFT_PATH)
	cp $(LIBFT_NAME) $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
    
clean:
	make clean -C $(LIBFT_PATH)
	rm -rf $(OBJECTS_DIR)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
