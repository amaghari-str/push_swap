NAME        = push_swap

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

LIBFT_DIR   = ../libft
LIBFT       = $(LIBFT_DIR)/libft.a

SRCS        = create_fill_struct.c \
              disorder.c \
              flag_operations.c \
              main.c \
              simple_algoritm.c \
              push.c \
              revers_rotate.c \
              rotate.c \
              swap.c

OBJS        = $(SRCS:.c=.o)

INCLUDES    = -I. -I$(LIBFT_DIR)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
