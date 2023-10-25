/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:57:09 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/24 16:21:41 by ottouti          ###   ########.fr       */
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
		return (NULL);
	current = lst;
	new = ft_lstnew(current -> content);
	current_new = new;
	while (current -> next != NULL)
	{
		current -> content = f(current -> content);
		current_new -> content = current -> content;
		current = current -> next;
		current_new -> next = ft_lstnew(current -> content);
		current_new = current_new -> next;
	}
	current -> content = f(current -> content);
	current_new -> content = current -> content;
	return (new);
}
