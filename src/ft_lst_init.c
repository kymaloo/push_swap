/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:44:34 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/11 14:49:36 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_p_s **a, t_p_s *new)
{
	t_p_s	*tmp;

	if (!*a)
		*a = new;
	else
	{
		tmp = ft_lstlast(*a);
		tmp->next = new;
	}
}

void	ft_lstadd_front(t_p_s **a, t_p_s *new)
{
	if (!a || !new)
		return ;
	new->next = *a;
	*a = new;
}

int	ft_lstsize(t_p_s *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

t_p_s	*ft_lstlast(t_p_s *a)
{
	int	i;

	i = ft_lstsize(a);
	while (i-- > 1)
		a = a->next;
	return (a);
}

t_p_s	*ft_lstnew(int nb)
{
	t_p_s	*a;

	a = malloc(sizeof(t_p_s));
	if (!a)
		return (NULL);
	a->nb = nb;
	a->next = NULL;
	return (a);
}
