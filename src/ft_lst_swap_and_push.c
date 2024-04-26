/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap_and_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 02:41:47 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 16:26:50 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_swap(t_stack *stack, t_p_s *a, t_p_s *b)
{
	if (a)
	{
		stack->a = ft_swap(a);
		ft_printf("sa\n");
	}
	else
	{
		stack->b = ft_swap(b);
		ft_printf("sb\n");
	}
}

void	ft_ss(t_stack *stack, t_p_s *a, t_p_s *b)
{
	stack->a = ft_swap(a);
	stack->b = ft_swap(b);
	ft_printf("ss\n");
}

t_p_s	*ft_swap(t_p_s *a)
{
	t_p_s	*tmp;

	if (a == NULL || a->next == NULL)
		return (a);
	tmp = a->next;
	a->next = tmp->next;
	tmp->next = a;
	tmp->back = NULL;
	a->back = tmp;
	if (a->next != NULL)
		a->next->back = a;
	return (tmp);
}

t_p_s	*ft_push(t_p_s **first, t_p_s *seconde, int bool)
{
	t_p_s	*tmp;

	if (first == NULL)
		return (seconde);
	tmp = *first;
	if (tmp != NULL)
		tmp->back = NULL;
	ft_lstadd_back(&seconde, ft_lstnew(tmp->nb));
	ft_delete_node(first);
	if (!bool)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
	return (seconde);
}
