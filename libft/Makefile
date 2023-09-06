NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

IFLAGS = -Iinc

MK = mkdir -p

SOURCES = \
	src/ft_atoi.c \
	src/ft_bzero.c \
	src/ft_calloc.c \
	src/ft_isalnum.c \
	src/ft_isalpha.c \
	src/ft_isascii.c \
	src/ft_isdigit.c \
	src/ft_isprint.c \
	src/ft_itoa.c \
	src/ft_memchr.c \
	src/ft_memcmp.c \
	src/ft_memcpy.c \
	src/ft_memmove.c \
	src/ft_memset.c \
	src/ft_putchar_fd.c \
	src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c \
	src/ft_putstr_fd.c \
	src/ft_split.c \
	src/ft_strdup.c \
	src/ft_striteri.c \
	src/ft_strjoin.c \
	src/ft_strlcat.c \
	src/ft_strlcpy.c \
	src/ft_strmapi.c \
	src/ft_strncmp.c \
	src/ft_strnstr.c \
	src/ft_strrchr.c \
	src/ft_strtrim.c \
	src/ft_substr.c \
	src/ft_tolower.c \
	src/ft_toupper.c \
	src/ft_nbrlen_base.c \
	src/ft_putunbr_base.c \
	src/ft_puthexa_u.c \
	src/ft_unbrlen_base.c \
	src/ft_putchar.c \
	src/ft_putnbr.c \
	src/ft_putstr.c \
	src/ft_strchr.c \
	src/ft_strlen.c \

BONUS_SOURCES = \
	src/ft_lstadd_back_bonus.c \
	src/ft_lstadd_front_bonus.c \
	src/ft_lstclear_bonus.c \
	src/ft_lstdelone_bonus.c \
	src/ft_lstiter_bonus.c \
	src/ft_lstlast_bonus.c \
	src/ft_lstmap_bonus.c \
	src/ft_lstnew_bonus.c \
	src/ft_lstsize_bonus.c \

OBJECTS_DIR = objs

OBJECTS = $(addprefix $(OBJECTS_DIR)/, $(SOURCES:%.c=%.o))

BONUS_OBJECTS = $(addprefix $(OBJECTS_DIR)/, $(BONUS_SOURCES:%.c=%.o))

all: $(NAME)

$(OBJECTS_DIR)/%.o: %.c
	$(MK) $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $?

bonus:
	@make OBJECTS="$(BONUS_OBJECTS)" --no-print-directory

clean:
	rm -rf $(OBJECTS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
