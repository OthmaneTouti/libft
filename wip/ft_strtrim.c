/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:01:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/22 13:30:01 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_start(const char *s1, const char *set)
{
	size_t	count;

	count = 0;
	while (*s1)
	{
		if (ft_strchr(set, *s1))
		{
			s1++;
			count++;
		}
		else
			return (count);
	}
	return (count);
}

static size_t	count_end(const char *s1, const char *set)
{
	size_t	count;

	count = 0;
	s1--;
	while (*s1)
	{
		if (ft_strchr(set, *s1))
		{
			s1--;
			count++;
		}
		else
			return (count);
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed_s1;
	size_t	count_first;
	size_t	count_last;
	size_t	len_s1;

	len_s1 = ft_strlen((char *)s1);
	count_first = count_start(s1, set);
	count_last = count_end(s1 + len_s1, set);
	if (count_first == len_s1 || count_last == len_s1)
		return (0);
	trimmed_s1 = (char *) malloc(len_s1 - count_first - count_last);
	if (!trimmed_s1)
		return (0);
	ft_strlcpy(trimmed_s1, s1 + count_first,
		len_s1 - count_first - count_last + 1);
	return (trimmed_s1);
}
