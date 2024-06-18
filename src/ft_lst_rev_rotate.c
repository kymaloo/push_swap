/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_rev_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:09:52 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 18:55:32 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_rev_rotate(&a, 0);
	stack->b = ft_rev_rotate(&b, 1);
	ft_printf("rrr\n");
}

t_p_s	*ft_rev_rotate(t_p_s **a, int bool)
{
	t_p_s	*first;
	t_p_s	*last;
	t_p_s	*tmp;

	if (*a == NULL || (*a)->next == NULL)
		return (*a);
	first = *a;
	last = first;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = first;
	*a = last;
	if (!bool)
		ft_printf("rra\n");
	else
		ft_printf("rrb\n");
	return (*a);
}
