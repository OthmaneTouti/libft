#include "libft.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

void	f(void *content)
{
	*(int *)content += 1; 
}

int main(void)
{
    t_list *node1, *node2, *node3, *node4;

	node1 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node1->content) = 1;
	node2 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node2->content) = 2;
	node3 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node3->content) = 3;
	node4 = ft_lstnew(malloc(sizeof(int)));
	*(int *)(node4->content) = 4;

    node1->next = node2;
    node2->next = node3;
	node3->next = node4;
	
    t_list *new = (node1, &f, &del);
	t_list *current_new = new;

	while(current_new != NULL)
	{
		printf("%d\n", *(int *)current_new->content);
		current_new = current_new -> next;
	}

    return 0;
}