#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ans;
	t_list *tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ans = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&ans, del);
			return (0);
		}
		ft_lstadd_back(&ans,tmp);
		lst = lst->next;
	}
	return (ans);
}

