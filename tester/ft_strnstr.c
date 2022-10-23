/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:57:12 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/23 15:03:36 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	n;

	n = 0;
	if (needle == NULL)
		return (haystack);
	if (len == 0)
		return (0);
	while (n < len)
		if (haystack[n] == needle[n])
			
		
		
}