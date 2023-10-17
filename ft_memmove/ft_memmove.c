/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:16:56 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/17 17:59:54 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	char	buffer[ft_strlen(dst)];
	int		i;

	i = 0;
	while (buffer[i])
	{
		buffer[i] = *(char *)dst;
		i++;
		dst++;
	}
	dst = dst - ft_strlen(buffer);
	i = 0;
	while (len)
	{
		buffer[i] = *(char *)src;
		i++;
		src++;
		len--;
	}
	return (dst);
}