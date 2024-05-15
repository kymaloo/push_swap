/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:52:47 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 19:53:47 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	check_doublon(t_p_s *a)
{
	t_p_s	*i;
	t_p_s	*j;

	i = a;
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->nb == j->nb)
				return (EXIT_FAILURE);
			j = j->next;
		}
		i = i->next;
	}
	return (EXIT_SUCCESS);
}

int	is_sorted(t_p_s *a)
{
	t_p_s	*i;
	t_p_s	*j;
	int		status;

	i = a;
	j = i->next;
	status = EXIT_SUCCESS;
	//ft_print_all_lst(a);
	while (j)
	{
		if (i->nb > j->nb)
			status = EXIT_FAILURE;
		i = j;
		j = i->next;
	}
	return (status);
}
