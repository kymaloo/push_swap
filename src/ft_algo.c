/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:12:55 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/15 22:04:18 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_p_s    *ft_tri_for_3(t_p_s *a)
{
    t_p_s *first;
    t_p_s *second;
    t_p_s *last;

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

t_p_s    *ft_tri_for_4(t_p_s *a, t_p_s *b, int result)
{
    result = ft_find_little(a);
    if (result == 0)
        b = ft_push(&a, b, 1);
    else if (result == 1)
    {
        a = ft_swap(a, 0);
        b = ft_push(&a, b, 1);
    }
    else if (result == 2)
    {
        a = ft_rev_rotate(&a, 0);
        a = ft_rev_rotate(&a, 0);
        b = ft_push(&a, b, 1);
    }
    else if (result == 3)
    {
        a = ft_rev_rotate(&a, 0);
        b = ft_push(&a, b, 1);
    }
    a = ft_tri_for_3(a);
	a = ft_push(&b, a, 0);
    return (a);
}

t_p_s    *ft_tri_for_5(t_p_s *a, t_p_s *b, int result)
{
    result = ft_find_little(a);
    if (result == 0)
        b = ft_push(&a, b, 1);
    else if (result == 1)
    {
        a = ft_swap(a, 0);
        b = ft_push(&a, b, 1);
    }
    else if (result == 2)
    {
        a = ft_rotate(&a, 0);
        a = ft_rotate(&a, 0);
        b = ft_push(&a, b, 1);
    }
    else if (result == 3)
    {
        a = ft_rev_rotate(&a, 0);
        a = ft_rev_rotate(&a, 0);
        b = ft_push(&a, b, 1);
    }
    else if (result == 4)
    {
        a = ft_rev_rotate(&a, 0);
        b = ft_push(&a, b, 1);
    }
    a = ft_tri_for_4(a, b, 0);
   a = ft_push(&b, a, 0);
    return (a);
}

int ft_find_little(t_p_s *a)
{
    t_p_s   *first;
    t_p_s   *second;
    int     tmp;
    int     result;

    first = a;
    second = first->next;
    tmp = first->nb;
    result = 0;
    while (second)
    {
        if (tmp > second->nb)
            tmp = second->nb;
        second = second->next; 
    }
    while (first->nb != tmp)
    {
        result++;
        first = first->next;
    }
    return (result);
}
