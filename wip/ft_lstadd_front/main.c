#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*current;
	int 	*p;

	int i = 42;
	p = (int *) malloc(sizeof(int *));
	*p = i;
	head = ft_lstnew(p);
	while(i > 0)
	{
		i--;
		p = (int *) malloc(sizeof(int *));
		if (!p)
			return 0;
		*p = i;
		new = ft_lstnew(p);
		ft_lstadd_front(&head, new);
	}
	current = head;
	while(current != NULL)
	{
		printf("%d\n", *(int *)current -> content);
		current = current -> next;
	}

}