/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:52:47 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 19:32:46 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (j)
	{
		if (i->nb > j->nb)
			status = EXIT_FAILURE;
		i = j;
		j = i->next;
	}
	return (status);
}
