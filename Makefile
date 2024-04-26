NAME	:= push_swap

CFLAGS	:= -Wextra -Wall -Werror -g3

HEADERS	:= -Iinclude

SRCS	:= 	src/main.c \
			src/ft_lst_swap_and_push.c \
			src/ft_lst_cmd2.c \
			src/ft_lst_init.c \
			src/ft_lst_utils.c \
			src/ft_printf.c \
			src/ft_printf2.c \
			src/ft_utils.c \


OBJS	:= ${SRCS:.c=.o}

all: $(NAME)

r: re
	./$(NAME)

v: re
	valgrind -s --leak-check=full --track-origins=yes  ./$(NAME) 42 69 23 -42

n:
	norminette src/ include/

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

re :
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(HEADERS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, v, n