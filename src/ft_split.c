/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 22:04:43 by trgaspar          #+#    #+#             */
/*   Updated: 2024/04/26 23:37:50 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_word(char const *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
			i++;
		while (*str != c && *str)
			str++;
	}
	return (i);
}

char	**ft_free_all(char **tab, int i)
{
	while (tab[--i] && i >= 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int			nbword;
	char		**tab;
	const char	*start;
	int			i;

	i = 0;
	if (!s)
		return (NULL);
	nbword = ft_count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (nbword + 1));
	if (!tab)
		return (NULL);
	while (i < nbword)
	{
		while (*s && *s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		tab[i] = ft_substr(start, 0, s - start);
		if (!tab[i++])
			return (ft_free_all(tab, i - 1));
	}
	tab[i] = NULL;
	return (tab);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;		

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;
	char	*src1;

	i = 0;
	src1 = (char *)src;
	if (!dst && !src)
		return (dst[i]);
	while (src1[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src1[i] && (i < size - 1))
	{
		dst[i] = src1[i];
		i++;
	}
	dst[i] = '\0';
	while (src1[i])
		i++;
	return (i);
}
