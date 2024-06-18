/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap_and_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 02:41:47 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 18:57:19 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_swap(a, 0);
	stack->b = ft_swap(b, 1);
	ft_printf("ss\n");
}

t_p_s	*ft_swap(t_p_s *a, int bool)
{
	t_p_s	*tmp;

	if (a == NULL || a->next == NULL)
		return (a);
	tmp = a->next;
	a->next = tmp->next;
	tmp->next = a;
	if (!bool)
		ft_printf("sa\n");
	else
		ft_printf("sb\n");
	return (tmp);
}

t_p_s	*ft_push(t_p_s **first, t_p_s *seconde, int bool)
{
	t_p_s	*tmp;

	if (first == NULL)
		return (seconde);
	tmp = *first;
	ft_lstadd_front(&seconde, ft_lstnew(tmp->nb));
	ft_delete_node(first);
	if (!bool)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
	return (seconde);
}
