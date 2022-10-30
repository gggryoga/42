/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:34:05 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/25 09:56:05 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *h;
	size_t	h_size;

	h = (unsigned char *)s;
	h_size =ft_strlen(s);
	if (h_size > n)
		return (NULL);
	while (h[n] !='\0')
	{
		if (h[n] == (unsigned char)c)
			return (&h[n]);
		else
			n ++;	
	}
	return (NULL);
}
