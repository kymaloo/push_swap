/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:33:22 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 21:56:37 by trgaspar         ###   ########.fr       */
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
	stack = ft_calloc(1, sizeof(t_stack));
	if (!stack)
		free(stack);
	status = ft_init(argc, argv, stack);
	if (status == EXIT_FAILURE)
	{
		ft_lstclear(&stack->a);
		free(stack);
		return (status);
	}
	//ft_print_all_lst(stack->a);
	//ft_print_all_lst(stack->a);
	//puts("\n");
	stack->a = ft_tri_for_5(stack->a, stack->b, 0);
	puts("\n");
	ft_print_all_lst(stack->a);
	//ft_print_all_lst(stack->b);
	
	//stack->a = ft_swap(stack->a);
	//stack->a = ft_rev_rotate(&stack->a);
	//stack->b = ft_push(&stack->a, stack->b, 1);
	//ft_print_all_lst(stack->a);
	//ft_print_all_lst(stack->b);
	

	
//	ft_sort_int_tab(stack->tmp, ft_lstsize(stack->a));
	return (status);
}



void	ft_sort_int_tab(char *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

// void ft_bubble_sort(t_p_s *a)
// {
//     int swapped;
// 	int	temp;
//     t_p_s *i;
//     t_p_s *j = NULL;

//     if (a == NULL)
//         return;
//     swapped = 1;
//     while (swapped)
// 	{
//         swapped = 0;
//         i = a;

//         while (i->next != j)
// 		{
//             if (i->nb > i->next->nb)
// 			{
//                 temp = i->nb;
//                 i->nb = i->next->nb;
//                 i->next->nb = temp;
//                 swapped = 1;
//             }
//             i = i->next;
//         }
//         j = i;
//     }
// }
