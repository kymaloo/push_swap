/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:33:22 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/18 16:01:08 by trgaspar         ###   ########.fr       */
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
	ft_launch_algo(stack);
	ft_free_all2(stack);
	return (status);
}
