/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:32:49 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 17:06:37 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init(int argc, char *argv[], t_stack	*stack)
{
	int		i;
	int		status;
	char	**array;
	
	stack->tmp = calloc(1, ft_lstsize(stack->a));
	array = NULL;
	status = EXIT_SUCCESS;
	i = 1;
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		status = ft_check_number_arg(stack, array, 0);
		if (status == 1)
			return (1);
	}
	else
	{
		status = ft_check_number_arg(stack, argv, i);
		if (status == 1)
			return (1);
	}
	return (status);
}
