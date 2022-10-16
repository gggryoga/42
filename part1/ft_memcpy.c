/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:18:34 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/10 14:32:29 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest,const void *src,size_t n)
{
	char		*de_cpy;
	const char 	*sr_cpy;
	int			i;
	
	i = 0;
	de_cpy = (char *)dest;
	sr_cpy = (const char *)src;
	while (i < n)
	{
		*de_cpy + i = *sr_cpy++;
		i++;
	}
	return (dest);
}

int main(){

	printf("%s",ft_memcpy("helloworld","Thank you!",10));
		
}