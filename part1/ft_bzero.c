#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	size_t	count;
	unsigned char *h;

	h = (unsigned char *)s;
	count = ft_strlen(h);
	if (count < n)
		n = count;
	i = 0;
	while (i < n)
	{
		h[i] = (unsigned char)0;
		i ++;
	}
}
