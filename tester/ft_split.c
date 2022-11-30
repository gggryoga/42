/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:01:24 by rozeki            #+#    #+#             */
/*   Updated: 2022/11/30 17:53:27 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *str, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	**h;

	h = (char **)ft_calloc((words_count(s, c) + 1), sizeof(char *));
	if (h == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		n = i;
		while (s[i] != c && s[i] != 0)
			i++;
		h[j] = ft_substr(s, n, i - n);
		j++;
	}
	return (h);
}
