# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrudloff <mrudloff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 14:51:15 by mrudloff          #+#    #+#              #
#    Updated: 2023/02/01 08:19:20 by mrudloff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# 								NAME PROJECT								   #
# **************************************************************************** #
NAME	=	libftprintf.a

# **************************************************************************** #
# 								  COMMANDS									   #
# **************************************************************************** #
CC		=	@clang
CFLAGS	=	-Wall -Wextra -Werror
IFLAGS	=	-Iinc -Ilibft/inc
MK		=	@mkdir -p
RM		=	@rm -rf
FILE	=	$(shell ls -lR src/ | grep -F .c | wc -l)
CMP		=	1
CLEAR	=	@clear

# **************************************************************************** #
# 								   COLORS									   #
# **************************************************************************** #
GREEN	=	\033[38;5;76m
RED		=	\033[38;5;160m
YELLOW	=	\033[38;5;226m
ORANGE	=	\033[38;5;202m
PURPLE	=	\033[38;5;213m
LBLUE	=	\033[38;5;51m
BLUE	=	\033[38;5;117m
INDI	=	\033[38;5;99m
RESET	=	\033[00m

# **************************************************************************** #
# 								   PRINTS									   #
# **************************************************************************** #
RNBW	=	@printf "$(RED)Pri$(ORANGE)ntf $(YELLOW)libr$(GREEN)ary $(LBLUE)is r$(BLUE)ea$(INDI)dy $(PURPLE)to use$(RESET)\n"

# **************************************************************************** #
# 								   SOURCES									   #
# **************************************************************************** #
SRCS_DIR	:=	src
ALL_SRCS	:=	ft_printf.c
SRCS		:=	$(ALL_SRCS:%=$(SRCS_DIR)/%)

OBJS_DIR	:=	.objs
OBJS		:=	$(addprefix $(OBJS_DIR)/, $(SRCS:%.c=%.o))

# **************************************************************************** #
# 								    OTHERS									   #
# **************************************************************************** #
# LIBFT #
LIBFT_PATH	= ./libft --no-print-directory
LIBFT_NAME	= ./libft/libft.a

# **************************************************************************** #
# 								     RULES									   #
# **************************************************************************** #

all: $(LIBFT_NAME) $(NAME)

$(OBJS_DIR)/%.o: %.c
	$(MK) $(@D)
	@printf "\r$(LBLUE)[$(RESET)+$(LBLUE)] $(RESET)Adding $(GREEN)$<$(BLUE) [$(RESET)$(CMP)$(BLUE)/$(RESET)$(FILE)$(BLUE)]$(RESET)\n\r"
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))
	
$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJS) 
	@ar rcsT $(NAME) $(OBJS) $(LIBFT_NAME)
	$(RNBW)

clean:
	@make clean -C $(LIBFT_PATH)
	$(RM) $(OBJS_DIR)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
# 								 EXTRA RULES								   #
# **************************************************************************** #

run: re
	-./$(NAME)

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

print-%:
	$(info '$*'='$($*)')

update:
	git stash
	git pull
	git submodule update --init
	git stash pop

.PHONY: 
	all clean fclean re run update
