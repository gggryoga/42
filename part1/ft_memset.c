/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:31:10 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/17 15:08:27 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned int	*Z;

	i = 0;
	Z = (unsigned char *)buf;
	while (i < n)
	{
		ptr[i] = (unsigned char)ch;
		i ++;
	}
	return (buf);
}

