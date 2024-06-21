/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:33:22 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/21 16:28:04 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		status;
	t_stack	*stack;

	status = EXIT_SUCCESS;
	if (argc == 1)
	{
		ft_printf("Error\n");
		status = EXIT_FAILURE;
		return (status);
	}
	status = ft_init(argc, argv, &stack);
	if (status == 1)
		return (EXIT_FAILURE);
	if (argc == 3)
	{
		if (is_sorted(stack->a) != 0)
			stack->a = ft_swap(stack->a, 0);
		ft_free_all2(stack);
		return (EXIT_SUCCESS);
	}
	if (is_sorted(stack->a) != 0)
		ft_launch_algo(stack);
	ft_free_all2(stack);
	return (status);
}
