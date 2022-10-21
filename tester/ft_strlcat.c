/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:52:57 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/21 19:32:04 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	limit;
	
	i = ft_strlen(dst);
	s = ft_strlen(src);
	limit = dstsize - i - 1;
	dstsize = 0;
	while (dstsize <= limit || src[dstsize] != '\0')
	{
		dst[i] = src[dstsize];
		i ++;
		dstsize ++;
	}
	return (s + i);
}