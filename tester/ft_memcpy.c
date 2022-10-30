#include "libft.h"

void	*ft_memcpy(void	*dst,const void *src, size_t n)
{
	unsigned char *cpd;
	unsigned char *cps;
	size_t	i;

	cpd = (unsigned char *)dst;
	cps = (unsigned char *)src;
	if (dst != NULL && src != NULL)
	{
		i = 0;
		while (i < n)
		{
			cpd[i] = cps[i];
			i ++;
		}
	}
	return (cpd);
}

