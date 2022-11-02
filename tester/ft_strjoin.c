/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:11:36 by rozeki            #+#    #+#             */
/*   Updated: 2022/11/02 17:19:20 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *h;
	int n;
	int j;

	h = malloc(sizeof(char)* (ft_strlen(s1) + ft_strlen(s2)));
	if (h == NULL)
		return (NULL);
	n = 0;
	j = 0;
	while (s1[n])
	{
		h[n] = s1[n];
		n ++;
	}
	while (s2[j])
	{
		h[n] = s2[j];
		n ++;
		j ++;
	}
	return (h);
}