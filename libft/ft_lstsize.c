#include "libft.h"

int	ft_lstsize(t_list *lst){
	int	count;
	t_list	*current;

	count = 0;
	current = lst;
	//While current is not null do...
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}