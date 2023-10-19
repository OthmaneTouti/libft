/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:36:41 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/19 15:27:00 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str < 33 || *str == '+' || *str == '-'
		|| (*str >= '0' && *str <= '9'))
	{
		if (*str == '+'
			&& !(*(str + 1) >= '0' && *(str + 1) <= '9'))
			return (num);
		if (*str == '-' && sign == -1)
			return (num);
		else if (*str == '-' && sign == 1)
			sign = -1;
		else if (*str >= '0' && *str <= '9')
			num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
