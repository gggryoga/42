/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:42:04 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/16 19:34:03 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		c;

	c = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * c +1);
	i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char *h;
// 	h = ft_strdup("Hello World");
// 	printf("%s",h);
// }