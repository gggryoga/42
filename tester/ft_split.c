/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:01:24 by rozeki            #+#    #+#             */
/*   Updated: 2022/12/04 14:52:35 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	words_count(const char *str, char c)
// {
// 	int	i;
// 	int	cnt;

// 	i = 0;
// 	cnt = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
// 			cnt++;
// 		i++;
// 	}
// 	return (cnt);
// }

// char **ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	n;
// 	char	**h;

// 	h = (char **)ft_calloc((words_count(s, c) + 1), sizeof(char *));
// 	if (h == NULL || s == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		if (s[i] == '\0')
// 			break ;
// 		n = i;
// 		while (s[i] != c && s[i] != 0)
// 			i++;
// 		h[j] = ft_substr(s, n, i - n);
// 		j++;
// 	}
// 	return (h);
// }


#include "libft.h"

static void	free_lst(char **ans)
{
	while (*ans)
	{
		free (*ans);
		ans++;
	}
	free (ans);
}

static void	fill_ans(char const *s, char c, char **ans)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
			len ++;
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			*ans = ft_substr(s, i - len + 1, len);
			if (*ans++ == NULL)
			{
				free_lst(ans);
				return ;
			}
			len = 0;
		}
		i ++;
	}
	*ans = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			len ++;
		i++;
	}
	ans = (char **)malloc(sizeof(char *) * (len + 1));
	if (ans == NULL)
		return (NULL);
	fill_ans(s, c, ans);
	return (ans);
}

