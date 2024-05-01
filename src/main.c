/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:33:22 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/01 15:02:09 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		status;
	int		i;
	char	**tab;
	t_stack	*stack;

	tab = NULL;
	status = EXIT_FAILURE;
	i = 0;
	if (argc == 1)
	{
		ft_printf("Error\n");
		return (status);
	}
	stack = ft_calloc(1, sizeof(t_stack));
	if (!stack)
		free(stack);
	if (argc == 2)
	{
		tab = ft_split(argv[1], ' ');
		ft_check_number_arg(stack, tab, i);
	}
	else
		ft_check_number_arg(stack, argv, i);
	ft_print_all_lst(stack->a);
	free(stack);
	status = EXIT_SUCCESS;
	return (status);
}

void	ft_check_number_arg(t_stack *stack, char **tab, int i)
{
	while (tab[i] != NULL)
	{
		if (!ft_check_arg(tab[i]))
			ft_lstadd_back(&stack->a, ft_lstnew(ft_atoi(tab[i])));
		i++;
	}
}
