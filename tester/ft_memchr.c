/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:34:05 by rozeki            #+#    #+#             */
/*   Updated: 2022/12/08 11:36:50 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*h;
	int				i;

	h = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (h[i] == (unsigned char)c)
			return (&h[i]);
		else
			i ++;
	}
	return (NULL);
}
