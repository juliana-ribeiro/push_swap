# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/10 16:30:59 by juribeir          #+#    #+#              #
#    Updated: 2025/06/11 10:31:24 by juribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_PATH= libft/

LIBFT_A=	$(LIBFT_PATH)libft.a

CC=		cc
CFLAGS=		-g -Wall -Wextra -Werror
INCLUDE=	includes

SRCS=	push_swap.c utils/ft_add_first.c utils/ft_add_last.c \
		utils/ft_create_node.c utils/ft_remove_first.c utils/ft_remove_last.c \
		utils/pa.c utils/pb.c utils/ra.c utils/rb.c utils/rr.c utils/rra.c \
		utils/rrb.c utils/rrr.c utils/sa.c utils/sb.c utils/ss.c \
		utils/free_splited.c utils/free_resources.c utils/verify_arguments.c \
		utils/radix_sort.c utils/assign_indexes.c utils/free_stack.c \
		utils/stack_size.c utils/sort_three.c utils/swap.c \
		utils/rotate.c utils/rotate_reverse.c utils/get_min_index.c

OBJS=	$(SRCS:.c=.o)

all: $(LIBFT_A) $(NAME)

$(LIBFT_A):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_PATH)

fclean: clean
	make fclean -C $(LIBFT_PATH)
	rm -rf $(NAME)

re: fclean all

c:fclean $(NAME)

.PHONY: all clean fclean re
