#include "libft.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	del(void *content)
{
	free(content);
}

int main(void)
{
    t_list *node1, *node2, *node3, *node4;

    node1 = ft_lstnew(strdup("node1"));
    node2 = ft_lstnew(strdup("node2"));
    node3 = ft_lstnew(strdup("node3"));
	node4 = ft_lstnew(strdup("node4"));

    node1->next = node2;
    node2->next = node3;
	node3->next = node4;
	
    ft_lstclear(&node1, del);
    assert(node1==NULL);

    printf("All tests passed!\n");

    return 0;
}
