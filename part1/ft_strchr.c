/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:50:35 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/10 19:11:53 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int n;
	
	n = 0;
	if (s == NULL)
		return (NULL);
	while (s[n])
	{
		if (s[n] == (char)c)
			return ((char *)&s[n]);
		n ++;
	}
	if (s[n] == (char)c)
		return (s[n] * (char)s[n]);
	return (NULL);
}
