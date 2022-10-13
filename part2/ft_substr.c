#include "libft.h"

int	ft_strlen(char *c)
{
	int	n;

	while (c[n] != '\0')
	{
		n++;
	}
	return (n);
}


char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ans;
	int	c;
	int	n;

	c = ft_strlen(s);
	if (c < start)
		return (ans);
	ans = malloc(sizeof(char * (c - start));
	n = 0;
	while (s[c] != '\0')
	{
		ans[n] = s[c];
		n ++;
		c ++;
	}

}
