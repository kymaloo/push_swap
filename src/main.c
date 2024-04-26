/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:33:22 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 16:29:32 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		status;
	int		i;
	t_stack	*stack;

	status = EXIT_FAILURE;
	i = 1;
	if (argc < 3)
		ft_printf("Error: No one argument\n");
	stack = ft_calloc(1, sizeof(t_stack));
	if (!stack)
		free(stack);
	while (i != argc)
	{
		ft_lstadd_back(&stack->a, ft_lstnew(atoi(argv[i])));
		i++;
	}
	free(stack);
	return (status);
}
