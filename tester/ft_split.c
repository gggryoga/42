#include "libft.h"

int	ft_splitcount(char const *s,char c)
{
	int a;
	int count;

	count = 0;
	a = 0;
	while (s[a])
	{
		if(s[a] == c)
			count++;
		a++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char **h;
	int	count;
	int i;
	int a;

	a = 0;
	count = ft_splitcount(s, c);
	h = malloc(sizeof(char) * (ft_strlen(s) - count));
	if (h == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			h[a++] = *s[i++];
		else
			i++;
	}
	h[i] = 0;
	return (h);
}

int main()
{
	char *h = "Hello Wolrd";
	char c ='o';
	char *ans;

	ans = *ft_split(h,c);
	int a = 0;
	while (ans[a])
	{
		printf("%C",ans[a]);
		a++;
	}
	return 0;
}
