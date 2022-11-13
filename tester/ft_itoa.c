#include "libft.h"

int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len ++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*h;
	long	num;
	int	len;

	len = ft_len(n);
	num = n;
	h = malloc(sizeof(char) * len + 1);
	if (h == NULL)
		return (NULL);
	if (num < 0)
	{
		h[0] = '-';
		num = -num;
	}
	if (num == 0)
		h[0] = '\0';
	len --;
	while (num)
	{
		h[len] = num % 10 + '0';
		len --;
		num = num /10;
	}
	return (h);
}

