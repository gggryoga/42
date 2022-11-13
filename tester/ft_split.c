/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:01:24 by rozeki            #+#    #+#             */
/*   Updated: 2022/11/13 19:05:21 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static char	*words_put(const char *str, int start, int end)
{
	char	*words;
	int		i;

	i = 0;
	words = malloc(end - start + 1);
	while (start < end)
	{
		words[i] = str[start];
		start ++;
		i ++;
	}
	words[i] = '\0';
	return (words);

}

char **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	int		count;
	char	**h;

	h = malloc((words_count(s, c) + 1));
	if (h == NULL)
		return (NULL);
	i = 0;
	n = 0;
	count = -1;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && count < 0)
			count = i;
		else if (s[i] == c || i == ft_strlen(s))
		{
			h[n++] = words_put(s, count, i);
			count = -1;
		}
		i ++;
	}
	h[n] = 0;
	return (h);
}
