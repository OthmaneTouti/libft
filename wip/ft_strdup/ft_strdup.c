/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:17:25 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/19 19:14:49 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc(len + 1);
	ft_strlcpy(ptr, (const char *)src, len + 1);
	return (ptr);
}
