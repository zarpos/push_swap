# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:37:41 by drubio-m          #+#    #+#              #
#    Updated: 2023/05/23 18:01:20 by drubio-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c manage_parse.c utils.c movs1.c movs2.c movs3.c \
		get-max_min.c org3a.c org5.c
SRC_DIR = src
OBJS = $(addprefix $(SRC_DIR)/, $(SRC:.c=.o))
C = gcc
FLAGS = -Wall -Wextra -Werror # -g  # -fsanitize=address
NAME = push_swap
RM = rm -rf

LIBFT_DIR = libft/
LIBFT_A = libft.a
LIBFT = -L$(LIBFT_DIR) $(LIBFT_DIR)$(LIBFT_A)

all: $(NAME)

$(NAME): $(OBJS)
	@make bonus -C $(LIBFT_DIR)
	@gcc $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	@$(RM) $(OBJS) $(LIBFT_A)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean
	@make all
	
.PHONY:	all clean fclean re