/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turc_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:46:01 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:21:12 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_to_top_count(t_stack *stack, int nb, int identify)
{
	int	size;
	int	index;

	index = get_index(stack, nb, identify);
	if (identify == 0)
	{
		size = ft_lstsize(stack->a);
		if (index > size / 2)
			return (size - index);
		else
			return (index);
	}
	else
	{
		size = ft_lstsize(stack->b);
		if (index > size / 2)
			return (size - index);
		else
			return (index);
	}
}

int	count_number_a(t_stack *stack, int nb)
{
	int	number_count;

	number_count = 0;
	if (nb < ft_get_little(stack, 0))
		number_count = move_to_top_count(stack, ft_get_little(stack, 0), 0);
	else if (nb > ft_get_big(stack, 0))
		number_count = move_to_top_count(stack, ft_get_little(stack, 0), 0);
	else
		number_count = move_to_top_count(stack, search_value(nb, stack), 0);
	return (number_count);
}

int	count_number_b(t_stack *stack, int nb)
{
	int	number_count;

	number_count = move_to_top_count(stack, nb, 1) + 1;
	return (number_count);
}

void	move_to_top(t_stack *stack, int nb)
{
	int	index;
	int	index2;

	index2 = get_index(stack, nb, 1);
	if (nb < ft_get_little(stack, 0))
		index = get_index(stack, ft_get_little(stack, 0), 0);
	else if (nb > ft_get_big(stack, 0))
		index = get_index(stack, ft_get_little(stack, 0), 0);
	else
		index = get_index(stack, search_value(nb, stack), 0);
	rotate_or_rev_rotate_a(stack, index, 0);
	rotate_or_rev_rotate_b(stack, index2, 1);
	stack->a = ft_push(&stack->b, stack->a, 0);
}
