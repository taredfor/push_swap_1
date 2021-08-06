#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (lst && f)
	{
		new = ft_lstnew((f(lst->content)));
		temp = new;
		lst = lst->next;
		while (lst)
		{
			new = ft_lstnew((f(lst->content)));
			if (!new)
			{
				ft_lstclear(&new, del);
				return (0);
			}
			lst = lst->next;
			ft_lstadd_back(&temp, new);
		}
		return (temp);
	}
	return (0);
}
