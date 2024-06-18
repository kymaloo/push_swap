/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri_for_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:12:55 by trgaspar          #+#    #+#             */
/*   Updated: 2024/06/12 18:53:54 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_p_s	*ft_tri_for_3(t_p_s *a)
{
	t_p_s	*first;
	t_p_s	*second;
	t_p_s	*last;

	first = a;
	second = a->next;
	last = a->next->next;
	if ((first->nb > second->nb) && (first->nb > last->nb))
		a = ft_rotate(&a, 0);
	else if ((first->nb < second->nb) && (second->nb > last->nb))
		a = ft_rev_rotate(&a, 0);
	if (is_sorted(a) == 1)
		a = ft_swap(a, 0);
	return (a);
}
