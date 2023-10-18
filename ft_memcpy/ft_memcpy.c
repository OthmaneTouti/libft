/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:38:10 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/18 11:55:16 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size len)
{
	char		*d;
	const char	*s;

	if (dst == src)
		return (dst);
	d = (char *)dst;
	s = (const char *)src;
	while (len--)
		*d++ = *s++;
	return (dst);
}
