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
    t_list *node1, *node2, *node3;

    node1 = ft_lstnew(strdup("node1"));
    node2 = ft_lstnew(strdup("node2"));
    node3 = ft_lstnew(strdup("node3"));

    node1->next = node2;
    node2->next = node3;
	
    ft_lstdelone(node2, del);
	node1->next = node3;
    assert(node1->next == node3);

    printf("%s\n", (char *)node3->content);

    ft_lstdelone(node1, del);
    ft_lstdelone(node3, del);

    printf("All tests passed!\n");

    return 0;
}
