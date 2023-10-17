/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:48:16 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/17 14:33:41 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, t_size len)
{
	while (len > 0)
	{
		*(unsigned char *)ptr = (unsigned char)value;
		ptr++;
		len--;
	}
	return (ptr);
}
