/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:19:51 by rozeki            #+#    #+#             */
/*   Updated: 2022/11/02 18:43:47 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *h;
	int n;
	int i;
	int count;
	int fin;
	
	count = ft_strlen(s1);
	h = malloc(sizeof(char) * count);
	if (h == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i])
	{
		n = 0;
		while (set[n])
		{
			if (s1[i] != set[n])
				n++;
			else
				if (ft_strlen(set) == n)
					break;
		}
		i ++;
	}
	fin = 1;
	while (fin != 0)
	{
		n = 0;
		while (set[n])
		{
			if (s1[count] != set[n])
				n++;
			else
				if (ft_strlen(set) == n)
					fin = 0;
		}
		count --;
	}
	count ++;
	while (i < count)
	{
		h[fin] = s1[i];
		fin ++;
		i ++;
	}
	return (h);	
}