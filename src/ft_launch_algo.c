/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:15:20 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:26:48 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_or_rev_rotate_a(t_stack *stack, int nb, int identify)
{
	int	size;
	int	cpt;

	cpt = 0;
	size = ft_lstsize(stack->a);
	if (nb > size / 2)
	{
		nb = size - nb;
		while (cpt != nb)
		{
			stack->a = ft_rev_rotate(&stack->a, identify);
			cpt++;
		}
	}
	else
	{
		while (cpt != nb)
		{
			stack->a = ft_rotate(&stack->a, identify);
			cpt++;
		}
	}
}

void	rotate_or_rev_rotate_b(t_stack *stack, int nb, int identify)
{
	int	size;
	int	cpt;

	cpt = 0;
	size = ft_lstsize(stack->b);
	if (nb > size / 2)
	{
		nb = size - nb;
		while (cpt != nb)
		{
			stack->b = ft_rev_rotate(&stack->b, identify);
			cpt++;
		}
	}
	else
	{
		while (cpt != nb)
		{
			stack->b = ft_rotate(&stack->b, identify);
			cpt++;
		}
	}
}

void	ft_launch_algo(t_stack *stack)
{
	int	count;

	ft_all_push_stack_b(stack);
	stack->a = ft_tri_for_3(stack->a);
	while (stack->b)
	{
		count = return_best_number(stack);
		move_to_top(stack, count);
	}
	finish_tri(stack);
}
