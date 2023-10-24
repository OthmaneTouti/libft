/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:57:09 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/24 16:11:30 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;
	t_list	*current_new;

	if (!lst || !f || !del)
		return ;
	current = lst;
	new -> content = current -> content;
	current_new = new;
	while (current != NULL)
	{
		f(current -> content);
		current_new = current -> content;
		current = current -> next;
		current -> next = ft_lstnew(current -> content);
		current_new = current_new -> next;
	}
	return (new)
}
