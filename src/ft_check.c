/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:27:56 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:32:51 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_len_str(char *str)
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

int	ft_check_number_arg(t_stack *stack, char **tab, int i)
{
	int	error;
	int	result;

	error = 0;
	while (tab[i] != NULL)
	{
		if (ft_check_len_str(tab[i]) == 1)
			return (1);
		result = ft_atoi(tab[i], &error);
		if (error == 1)
			return (1);
		ft_lstadd_back(&stack->a, ft_lstnew(result));
		i++;
	}
	if (check_doublon(stack->a) != EXIT_SUCCESS)
		return (1);
	return (0);
}

int	ft_get_little(t_stack *stack, int bool)
{
	t_p_s	*cursor;
	int		little;

	if (bool == 0)
		cursor = stack->a;
	else
		cursor = stack->b;
	little = cursor->nb;
	while (cursor)
	{
		if (little > cursor->nb)
			little = cursor->nb;
		cursor = cursor->next;
	}
	return (little);
}

int	ft_get_big(t_stack *stack, int bool)
{
	t_p_s	*cursor;
	int		big;

	if (bool == 0)
		cursor = stack->a;
	else
		cursor = stack->b;
	big = cursor->nb;
	while (cursor)
	{
		if (big < cursor->nb)
			big = cursor->nb;
		cursor = cursor->next;
	}
	return (big);
}

int	ft_check_format_arg(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = ft_strlen(str);
	if (nb == 1 && (str[i] == '+' || str[i] == '-'))
		return (EXIT_FAILURE);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			i++;
		if (str[i] < '0' || str[i] > '9')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
