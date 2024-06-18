/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:32:49 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:24:05 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init(int argc, char *argv[], t_stack	**stack)
{
	int		status;

	status = EXIT_SUCCESS;
	status = ft_init_struct(stack);
	status = ft_init_arg(argc, argv, *stack);
	return (status);
}

int	ft_init_arg(int argc, char *argv[], t_stack	*stack)
{
	int		i;
	int		status;
	char	**tab;

	tab = NULL;
	status = EXIT_SUCCESS;
	i = 1;
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		status = ft_check_number_arg(stack, tab, 0);
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

int	ft_init_struct(t_stack **stack)
{
	int	status;

	status = EXIT_SUCCESS;
	*stack = ft_calloc(1, sizeof(t_stack));
	if (!*stack)
		status = EXIT_FAILURE;
	return (status);
}
