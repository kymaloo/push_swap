/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:42:07 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 16:27:06 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_rotate(t_stack *stack, t_p_s *a, t_p_s *b)
{
	if (a)
	{
		stack->a = ft_rotate(&a);
		ft_printf("ra\n");
	}
	else
	{
		stack->b = ft_rotate(&b);
		ft_printf("rb\n");
	}
}

void	ft_rr(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_rotate(&a);
	stack->b = ft_rotate(&b);
	ft_printf("rr\n");
}

t_p_s	*ft_rotate(t_p_s **a)
{
	t_p_s	*first;
	t_p_s	*last;
	t_p_s	*tmp;

	first = *a;
	last = ft_lstlast(*a);
	tmp = (*a)->next;
	last->next = first;
	first->back = last;
	first->next = NULL;
	tmp->back = NULL;
	*a = tmp;
	return (*a);
}
