/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:32:39 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:40:17 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define INT_MIN -2147483648
# define STACK_A 0
# define STACK_B 1
# define INT_MAX 2147483647

typedef struct s_p_s
{
	int				nb;
	struct s_p_s	*next;
}					t_p_s;

typedef struct s_stack
{
	t_p_s	*a;
	t_p_s	*b;
	int		count_a;
	int		count_b;
}				t_stack;

// File : check.c
int		ft_check_len_str(char *str);
int		ft_check_number_arg(t_stack *stack, char **tab, int i);
int		ft_get_little(t_stack *stack, int bool);
int		ft_get_big(t_stack *stack, int bool);
int		ft_check_format_arg(char *str);

// File : free.c
void	ft_free_all2(t_stack *stack);

// File : ft_init.c
int		ft_init(int argc, char *argv[], t_stack	**stack);
int		ft_init_arg(int argc, char *argv[], t_stack	*stack);
int		ft_init_struct(t_stack **stack);

// File : ft_launch_algo.c
void	rotate_or_rev_rotate_a(t_stack *stack, int nb, int identify);
void	rotate_or_rev_rotate_b(t_stack *stack, int nb, int identify);
void	ft_launch_algo(t_stack *stack);

// File : ft_lst_init.c
void	ft_lstadd_back(t_p_s **a, t_p_s *new);
void	ft_lstadd_front(t_p_s **a, t_p_s *new);
int		ft_lstsize(t_p_s *a);
t_p_s	*ft_lstlast(t_p_s *a);
t_p_s	*ft_lstnew(int nb);

// File : ft_lst_rev_rotate.c
void	ft_rrr(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_rev_rotate(t_p_s **a, int bool);

// File : ft_lst_rotate.c
void	ft_rr(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_rotate(t_p_s **a, int bool);

// File : ft_lst_swap_and_push.c
void	ft_ss(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_swap(t_p_s *a, int bool);
t_p_s	*ft_push(t_p_s **first, t_p_s *seconde, int bool);

// File : ft_lst_utils.c
void	ft_lstclear(t_p_s **a);
void	ft_print_all_lst(t_p_s *a);
void	ft_delete_node(t_p_s **head);

// File : ft_parse.c
int		check_doublon(t_p_s *a);
int		is_sorted(t_p_s *a);

// File : ft_printf.c
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_unsigned(unsigned int u);
int		ft_putchar_fd(char c, int fd);
int		ft_hexadecimal(unsigned long n, char *base, int ptr);

// File : ft_printf2.c
int		ft_parse_percent(char *str, va_list params);
int		ft_format(char format, va_list	params);
int		ft_printf(const char *format, ...);

// File : ft_split.c
int		ft_count_word(char const *str, char c);
char	**ft_free_all(char **tab, int i);
char	**ft_split(const char *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char	*dst, const char *src, size_t size);

// File : ft_tri_for_3.c
t_p_s	*ft_tri_for_3(t_p_s *a);

// File : ft_turc_sort_utils.c
void	ft_all_push_stack_b(t_stack *stack);
int		search_value(int nb, t_stack *stack);
int		get_index(t_stack *stack, int nb, int bool);
int		return_best_number(t_stack *stack);
void	finish_tri(t_stack *stack);

// File : ft_turc_sort.c
int		move_to_top_count(t_stack *stack, int nb, int identify);
int		count_number_a(t_stack *stack, int nb);
int		count_number_b(t_stack *stack, int nb);
void	move_to_top(t_stack *stack, int nb);

// File : ft_utils.c
int		ft_atoi(const char *nptr, int *error);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

// File : ft_utils2.c
char	*ft_strdup(const char *s);

#endif