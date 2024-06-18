/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:45:43 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/11 14:49:20 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_p_s **a)
{
	t_p_s	*tmp;
	t_p_s	*tmp2;

	if (!a)
		return ;
	tmp = *a;
	while (tmp)
	{
		tmp2 = tmp->next;
		if (a)
			free(tmp);
		tmp = tmp2;
	}
	*a = NULL;
}

void	ft_print_all_lst(t_p_s *a)
{
	t_p_s	*cursor;

	cursor = a;
	while (cursor)
	{
		ft_printf("print : %d\n", cursor->nb);
		cursor = cursor->next;
	}
	cursor = ft_lstlast(a);
}

void	ft_delete_node(t_p_s **a)
{
	t_p_s	*tmp;

	if (*a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
		return ;
	}
}
