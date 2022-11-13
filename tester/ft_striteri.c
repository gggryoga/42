#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;
	int n;

	i = 0;
	n = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (n < i)
		{
			(*f)(n,s);
			s++;
			n++;
		}
	}
}

