/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rev_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:09:52 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 16:25:28 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_rev_rotate(t_stack *stack, t_p_s *a, t_p_s *b)
{
	if (a)
	{
		stack->a = ft_rev_rotate(&a);
		ft_printf("rra\n");
	}
	else
	{
		stack->b = ft_rev_rotate(&b);
		ft_printf("rrb\n");
	}
}

void	ft_rrr(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_rev_rotate(&a);
	stack->b = ft_rev_rotate(&b);
	ft_printf("rrr\n");
}

t_p_s	*ft_rev_rotate(t_p_s **a)
{
	t_p_s	*first;
	t_p_s	*last;
	t_p_s	*tmp;

	first = *a;
	last = ft_lstlast(*a);
	tmp = last->back;
	last->next = first;
	first->back = last;
	tmp->next = NULL;
	last->back = NULL;
	*a = last;
	return (*a);
}
