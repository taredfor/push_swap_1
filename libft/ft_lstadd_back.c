#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mem;

	if (lst != 0)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			mem = ft_lstlast(*lst);
			mem->next = new;
		}	
	}
}
