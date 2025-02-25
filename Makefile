# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Dosyalar
SRCS = push_swap.c stack_utils.c operations.c sort_utils.c
OBJS = $(SRCS:.c=.o)

# Libft
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

# push_swap'ı oluştur
$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# .o dosyalarını derle
%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

# Libft'i derle
$(LIBFT):
	make -C $(LIBFT_DIR)

# Temizlik
clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
