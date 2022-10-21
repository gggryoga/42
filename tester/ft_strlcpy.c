/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:51:19 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/20 14:32:07 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst,const char *src,size_t dstsize)
{
	size_t i;
	int count;

	i = 0;
	count = ft_strlen(src);
	if (count < dstsize)
		dstsize = count;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i ++;
	}
	return (count);
}
