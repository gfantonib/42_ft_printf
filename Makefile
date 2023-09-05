NAME = libftprinf.a

CFLAGS = -Wall -Wextra -Werror -g

SOURCES = \
	ft_printf.c \
	ft_nbrlen_base.c \
	ft_putchar.c \
	ft_puthexa_u.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putunbr_base.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_unbrlen_base.c
	
OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $? 
	
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
