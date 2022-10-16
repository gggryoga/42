/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:16:14 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/10 19:25:41 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s,int c)
{
	char *ans;
	int 	n;
	
	n = 0;
	*ans = NULL;
	if (s == NULL)
		return (NULL);
	while (s[n])
	{
		if (s[n] == (char)c)
			*ans == s[n];
		n ++;
	}
	if (s[n] == (char)c)
		return ((char *)&s[n]);
	return (ans);
}