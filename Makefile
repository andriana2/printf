# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marianadovhanych <marianadovhanych@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 23:27:53 by marianadovh       #+#    #+#              #
#    Updated: 2024/03/22 09:00:05 by marianadovh      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = printf.h

SRC =	ft_printf.c print_xep.c print_diu.c print_sco.c

AR = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

LIBFT_DIR		=	./libft
LIBFT_NAME		=	libft.a

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

%.o: %.c
	@ $(CC) $(CCFLAGS) -c $< -o $@

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	@cp -n $(LIBFT_DIR)/$(LIBFT_NAME) .
	@mv -n $(LIBFT_NAME) $(NAME)
	@echo "$(GREEN)libft compiled!$(DEF_COLOR)"
	@ $(AR) $(NAME) $(OBJ)
	@echo "$(MAGENTA)ft_printf compiled!$(DEF_COLOR)"

clean:
	@make clean -C $(LIBFT_DIR)
	@echo "$(BLUE)libtf object files cleaned!$(DEF_COLOR)"
	@ $(RM) -rf $(OBJ)
	@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)
	@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

.PHONY: all clean fclean re