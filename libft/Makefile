# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:18:27 by drubio-m          #+#    #+#              #
#    Updated: 2023/05/22 16:47:35 by drubio-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
	  ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c \
	  ft_strncmp.c ft_tolower.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	  ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_c.c ft_d-i.c ft_p.c ft_printf.c ft_s.c ft_u.c ft_x-X.c ft_error.c\
	  get_next_line.c get_next_line_utils.c
BONUS = ft_lstnew_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM =  /bin/rm -f


$(NAME): $(OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)

all: $(NAME) 
	@echo " \033[36m[ OK ] | READY TO PLAY!\033[0m"

B = .

bonus: $(B)

$(B): $(OBJ) $(BONUS_OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
	$(RM) $(NAME) $(BONUS_OBJS) $(OBJS)
re: fclean all
.PHONY: all fclean clean re 
