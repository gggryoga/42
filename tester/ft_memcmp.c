/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:46:55 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/30 15:18:16 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*h1;
	unsigned char	*h2;
	int				c;

	h1 = (unsigned char *)s1;
	h2 = (unsigned char *)s2;
	while (c <= n)
	{
		if (h1[c] > h2[c])
			return (h1[c] - h2[c]);
		else if (h2[c] > h1[c])
			return (h1[c] - h2[c]);
		c++;
	}
	return (0);
}