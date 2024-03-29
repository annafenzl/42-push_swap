# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 10:20:27 by afenzl            #+#    #+#              #
#    Updated: 2022/10/21 16:39:05 by afenzl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONNAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
RM := rm -f

SRC =	main.c check_input.c ft_error.c free.c lists.c handle_lists.c \
		./operations/pl.c ./operations/sl.c ./operations/rl.c \
		sort.c sort_small.c sort_big.c index.c \
		read_lists.c
OBJ = $(SRC:.c=.o)

BONSRC = ./bonus/checker.c check_input.c ft_error.c free.c lists.c handle_lists.c \
		./bonus/operations/pl.c ./bonus/operations/sl.c ./bonus/operations/rl.c \
		read_lists.c 
BONOBJ = $(BONSRC:.c=.o)

LIBFT = libft/libs.a
LIBFTSRC = ./libft/libft/ft_memset.c\
		./libft/libft/ft_bzero.c	\
		./libft/libft/ft_memcpy.c	\
		./libft/libft/ft_memmove.c	\
		./libft/libft/ft_memchr.c	\
		./libft/libft/ft_memcmp.c	\
		./libft/libft/ft_strlen.c	\
		./libft/libft/ft_isalpha.c	\
		./libft/libft/ft_isdigit.c	\
		./libft/libft/ft_isalnum.c	\
		./libft/libft/ft_isascii.c	\
		./libft/libft/ft_isprint.c	\
		./libft/libft/ft_toupper.c	\
		./libft/libft/ft_tolower.c	\
		./libft/libft/ft_strchr.c	\
		./libft/libft/ft_strrchr.c	\
		./libft/libft/ft_strncmp.c	\
		./libft/libft/ft_strlcpy.c	\
		./libft/libft/ft_strlcat.c	\
		./libft/libft/ft_strnstr.c	\
		./libft/libft/ft_atoi.c		\
		./libft/libft/ft_calloc.c	\
		./libft/libft/ft_strdup.c	\
		./libft/libft/ft_substr.c	\
		./libft/libft/ft_strjoin.c 	\
		./libft/libft/ft_strtrim.c	\
		./libft/libft/ft_split.c	\
		./libft/libft/ft_itoa.c		\
		./libft/libft/ft_strmapi.c	\
		./libft/libft/ft_striteri.c	\
		./libft/libft/ft_putchar_fd.c	\
		./libft/libft/ft_putstr_fd.c	\
		./libft/libft/ft_putendl_fd.c	\
		./libft/libft/ft_putnbr_fd.c	\
		./libft/libft/ft_lstnew.c		\
		./libft/libft/ft_lstadd_front.c	\
		./libft/libft/ft_lstsize.c		\
		./libft/libft/ft_lstlast.c		\
		./libft/libft/ft_lstadd_back.c	\
		./libft/libft/ft_lstclear.c		\
		./libft/libft/ft_lstdelone.c	\
		./libft/libft/ft_lstiter.c		\
		./libft/printf/ft_printf.c		\
		./libft/printf/ft_types.c		\
		./libft/printf/ft_print_sciu.c	\
		./libft/printf/ft_print_p.c		\
		./libft/printf/ft_print_x.c		\
		./libft/get_next_line/get_next_line.c	\
		./libft/get_next_line/get_next_line_utils.c	\

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTSRC)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

bonus: $(BONOBJ) $(LIBFTSRC)
	make -C ./libft
	$(CC) $(CFLAGS) $(BONOBJ) $(LIBFT) -o $(BONNAME)

clean:
	make fclean -C ./libft/
	$(RM) $(OBJ) $(BONOBJ)

fclean: clean
	$(RM) $(NAME) $(BONNAME)

re: fclean all

.PHONY: all clean fclean re
