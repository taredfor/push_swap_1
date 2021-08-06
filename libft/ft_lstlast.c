#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		if (lst == 0)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}
