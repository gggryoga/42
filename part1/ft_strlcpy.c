/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:51:19 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/10 15:52:01 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst,const char *src,size_t dstsize)
{
	int i;
	int count;

	i = 0;
	count = ft_strlen(src);
	// if (count <= dstsize)
	// 	dstsize = count;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i ++;
	}
	return (count);
}

int main(){
	int M;
	M = ft_strlcpy("Hello", "wold",4);
	printf("%d",M);
}