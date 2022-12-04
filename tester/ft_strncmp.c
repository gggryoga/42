/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:02:34 by rozeki            #+#    #+#             */
/*   Updated: 2022/12/04 15:03:02 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*h1;
	unsigned char	*h2;

	if (n == 0)
		return (0);
	h1 = (unsigned char *)s1;
	h2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (h1[i] == h2[i] && h1[i] != '\0' && h2[i] != '\0')
			i ++;
		else
			return (h1[i] - h2[i]);
	}
	return (0);
}
