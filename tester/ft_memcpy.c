#include "libft.h"

void	ft_memcpy(void	*dst,const void *src, size_t n)
{
	unsigned char *cpd;
	unsigned char *cps;
	size_t	i;
	size_t	count;

	cpd = (unsigned char *)dst;
	cps = (unsigned char *)src;
	count = ft_strlen(src);
	if (count < n)
		n = count;
	i = 0;
	while (i < n)
	{
		cpd[i] = cps[i];
		i ++;
	}
}

