#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*mem;

	if (!lst || !del)
		return ;
	if (lst)
	{
		while (*lst)
		{
			mem = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = mem;
		}
	}
}
