/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:17:24 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/22 21:06:07 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	check_sign(int n)
{
	int	is_negative;
	
	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	return (is_negative);
}

static size_t	count_digits(int n)
{
	size_t	len;

	len = 0;
	while(n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	write_str(int n, char *num_str, size_t len)
{
	size_t	i;
	int	divisor;
	
	if (*num_str == '-')
		num_str++;
	while (len)
	{
		i = 1;
		divisor = 1;
		while (i < len)
		{
			divisor *= 10;
			i++;
		}
		*num_str = '0' + (n / divisor);
		num_str++;
		n %= divisor;
		len --;
	}
	*num_str = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*num_str;
	int		is_negative;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	is_negative = check_sign(n);
	if (is_negative)
		n = -n;
	len = count_digits(n);
	num_str = (char *) malloc((len + 1 + is_negative));
	if(!num_str)
		return (0);
	if (is_negative)
		*num_str = '-';
	write_str(n, num_str, len);
	return (num_str);
}
