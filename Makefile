NAME	:=  push_swap

CFLAGS	:= -Wextra -Wall -Werror -g3

HEADERS	:= -Iinclude

SRCS	:= 	src/main.c \
			src/ft_tri_for_3.c \
			src/ft_turc_sort_utils.c \
			src/ft_turc_sort.c \
			src/ft_init.c \
			src/ft_check.c \
			src/ft_lst_init.c \
			src/ft_lst_rev_rotate.c \
			src/ft_lst_rotate.c \
			src/ft_lst_swap_and_push.c \
			src/ft_lst_utils.c \
			src/ft_parse.c \
			src/ft_printf.c \
			src/ft_printf2.c \
			src/ft_split.c \
			src/ft_utils.c \
			src/ft_utils2.c \
			src/ft_free.c \
			src/ft_launch_algo.c \

OBJS	:= ${SRCS:.c=.o}
		   
all: $(NAME)

n:
	norminette src/ include/

%.o: %.c
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

$(NAME):  $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(HEADERS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean all

.PHONY: all, clean, fclean, re, v, n