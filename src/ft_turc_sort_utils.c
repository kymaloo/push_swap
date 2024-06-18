/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turc_sort_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:12:58 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:14:03 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_all_push_stack_b(t_stack *stack)
{
	while (ft_lstsize(stack->a) != 3)
	{
		stack->b = ft_push(&stack->a, stack->b, STACK_B);
	}
}

int	search_value(int nb, t_stack *stack)
{
	t_p_s	*tmp;
	int		value;

	tmp = stack->a;
	value = ft_get_big(stack, 0);
	while (tmp != NULL)
	{
		if (tmp->nb > nb && tmp->nb < value)
		{
			value = tmp->nb;
		}
		tmp = tmp->next;
	}
	return (value);
}

int	get_index(t_stack *stack, int nb, int bool)
{
	t_p_s	*tmp;
	int		i;

	i = 0;
	if (bool == 0)
		tmp = stack->a;
	else
		tmp = stack->b;
	while (tmp && tmp->nb != nb)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	return_best_number(t_stack *stack)
{
	int		result;
	int		count;
	int		tmp;
	int		nb;
	t_p_s	*tmp_b;

	tmp_b = stack->b;
	result = tmp_b->nb;
	count = 0;
	tmp = INT_MAX;
	while (tmp_b)
	{
		nb = tmp_b->nb;
		stack->count_a = count_number_a(stack, nb);
		stack->count_b = count_number_b(stack, nb);
		count = stack->count_a + stack->count_b;
		if (count < tmp)
		{
			result = tmp_b->nb;
			tmp = count;
		}
		tmp_b = tmp_b->next;
	}
	return (result);
}

void	finish_tri(t_stack *stack)
{
	int	little;
	int	index;
	int	size;

	little = ft_get_little(stack, STACK_A);
	index = get_index(stack, little, STACK_A);
	size = ft_lstsize(stack->a);
	if (index > size / 2)
	{
		index = size - index;
		while (index != 0)
		{
			stack->a = ft_rev_rotate(&stack->a, STACK_A);
			index--;
		}
	}
	else
	{
		while (index != 0)
		{
			stack->a = ft_rotate(&stack->a, STACK_A);
			index--;
		}
	}
}
