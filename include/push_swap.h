/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:32:39 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 21:54:14 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_p_s
{
	int				nb;
	struct s_p_s	*next;
}			t_p_s;

typedef struct s_stack
{
	t_p_s		*a;
	t_p_s		*b;
	char		*tmp;
	int			size;
}			t_stack;

t_p_s   *ft_tri_for_3(t_p_s *a);
t_p_s   *ft_tri_for_4(t_p_s *a, t_p_s *b, int result);
t_p_s    *ft_tri_for_5(t_p_s *a, t_p_s *b, int result);
int		ft_find_little(t_p_s *a);

//void	ft_bubble_sort(t_p_s *a);
void	ft_sort_int_tab(char *tab, int size);

// File : main.c
int	ft_check_number_arg(t_stack *stack, char **tab, int i);

// File : ft_init.c
int	ft_init(int argc, char *argv[], t_stack	*stack);

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

// File : ft_utils.c
int		ft_atoi(const char *nptr, int *error);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

// File : ft_utils2.c
char	*ft_strdup(const char *s);


int ft_check_len_str(char *str);

#endif