/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:40:00 by rozeki            #+#    #+#             */
/*   Updated: 2022/11/02 16:51:22 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *h;
	int i;
	int n;

	h = malloc(sizeof(char) * (len + 1));
	if (h == NULL)
		return (NULL);
	if (ft_strlen(s) < start || len == 0)
		return (h);
	i = start;
	n = 0;
	while (s[i] && n < len)
	{
		h[n] = s[i];
		n ++;
		i ++;
	}
	return (h);
}