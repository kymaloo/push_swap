/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:27:56 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 17:38:06 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_number_arg(t_stack *stack, char **array, int i)
{
	int error;
	int	result;

	error = 0;
	while (array[i] != NULL)
	{
		if (ft_check_len_str(array[i]) == 1)
				return (1);
		result = ft_atoi(array[i], &error);
		if (error == 1)
			return (1);
		ft_lstadd_back(&stack->a, ft_lstnew(ft_atoi(array[i], &error)));
		stack->tmp[i] = result;
		i++;
	}
	if (check_doublon(stack->a) != EXIT_SUCCESS)
		return (1);
	return (0);
}

int ft_check_len_str(char *str)
{
	int	len;
	int	status;

	len = ft_strlen(str);
	status = EXIT_SUCCESS;
	if (len == 1 && (*str == '+' || *str == '-'))
		status = EXIT_FAILURE;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			str++;
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (status);
}
