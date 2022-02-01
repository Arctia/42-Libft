
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	t;

	if (!lst || !del)
		return ;
	while (lst && *lst)
	{
		t = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = t;
	}
}
