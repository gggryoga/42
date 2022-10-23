/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:07:42 by rozeki            #+#    #+#             */
/*   Updated: 2022/10/23 15:24:08 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int c;
	int i;
	unsigned int *h;

	c = 0;
	i = 0;
	if (str[c] == 43 || str[c] == 45)
		c++;
	while (str[c])
	{
		if (str[c] < 48 || str[c] > 57)
			return (h);
		else if (48 < str[c] && str[c] < 57)
		{
			h[i] = (unsigned int)str[c];
			c ++;
		}
		
	}
}