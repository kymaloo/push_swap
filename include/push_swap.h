/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:32:39 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/01 15:01:05 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_p_s
{
	int				nb;
	struct s_p_s	*back;
	struct s_p_s	*next;
}			t_p_s;

typedef struct s_stack
{
	t_p_s		*a;
	t_p_s		*b;
	int			size;
}			t_stack;

// File : main.c
void	ft_check_number_arg(t_stack *stack, char **tab, int i);

// File : ft_lst_init.c
void	ft_lstadd_back(t_p_s **a, t_p_s *new);
int		ft_lstsize(t_p_s *a);
t_p_s	*ft_lstlast(t_p_s *a);
t_p_s	*ft_lstnew(int nb);

// File : ft_lst_rev_rotate.c
void	ft_print_rev_rotate(t_stack *stack, t_p_s *a, t_p_s *b);
void	ft_rrr(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_rev_rotate(t_p_s **a);

// File : ft_lst_rotate.c
void	ft_print_rotate(t_stack *stack, t_p_s *a, t_p_s *b);
void	ft_rr(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_rotate(t_p_s **a);

// File : ft_lst_swap_and_push.c
void	ft_print_swap(t_stack *stack, t_p_s *a, t_p_s *b);
void	ft_ss(t_stack *stack, t_p_s *a, t_p_s *b);
t_p_s	*ft_swap(t_p_s *a);
t_p_s	*ft_push(t_p_s **first, t_p_s *seconde, int bool);

// File : ft_lst_utils.c
void	ft_lstclear(t_p_s **a);
void	ft_print_all_lst(t_p_s *a);
void	ft_delete_node(t_p_s **head);

// File : ft_parse.c
int		ft_check_arg(char *str);

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
int		ft_atoi(const char *nptr);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);

// File : ft_utils2.c
char	*ft_strdup(const char *s);

#endif