/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:52:47 by trgaspar          #+#    #+#             */
/*   Updated: 2024/05/01 15:54:54 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_arg(char *str)
{
	int	i;
	int	tmp;
	int	nb;

	i = 0;
	nb = ft_strlen(str);
	if (nb == 1 && (str[i] == '+' || str[i] == '-'))
		return (1);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	tmp = ft_atoi(str);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return (1);
	return (0);
}
