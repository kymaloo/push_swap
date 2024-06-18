/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:42:07 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/18 15:54:31 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_rotate(&a, 0);
	stack->b = ft_rotate(&b, 1);
	ft_printf("rr\n");
}

t_p_s	*ft_rotate(t_p_s **a, int bool)
{
	t_p_s	*first;
	t_p_s	*last;
	t_p_s	*tmp;

	first = *a;
	last = ft_lstlast(*a);
	tmp = (*a)->next;
	last->next = first;
	first->next = NULL;
	*a = tmp;
	if (!bool)
		ft_printf("ra\n");
	else
		ft_printf("rb\n");
	return (*a);
}
