/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:31:41 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:05:27 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all2(t_stack *stack)
{
	if (stack->a != NULL)
		ft_lstclear(&stack->a);
	if (stack->b != NULL)
		ft_lstclear(&stack->b);
	if (stack != NULL)
		free(stack);
}
