/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:45:43 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 16:29:13 by trgaspar         ###   ########.fr       */
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
	ft_printf("1 :\n");
	while (cursor)
	{
		ft_printf("nb : %d\n", cursor->nb);
		cursor = cursor->next;
	}
	cursor = ft_lstlast(a);
	ft_printf("2 : \n");
	while (cursor)
	{
		ft_printf("nb : %d\n", cursor->nb);
		cursor = cursor->back;
	}
	ft_printf("\n");
}

void	ft_delete_node(t_p_s **a)
{
	t_p_s	*tmp;

	if (*a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		(*a)->back = NULL;
		free(tmp);
		return ;
	}
}
