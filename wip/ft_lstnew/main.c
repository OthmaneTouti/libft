#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*node;
	int		content = 42;

	node = ft_lstnew(&content);
	printf("Content: %d\nNext: %s\n", *(int *)node -> content, (char *)node -> next);
}