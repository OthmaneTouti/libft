/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:23:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/22 14:50:12 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static size_t	count_words(char *s, char c)
{
	int		in_word;
	size_t	count;

	in_word = 1;
	count = 1;
	while (*s)
	{
		if (*s == c && in_word == 1)
		{
			in_word = 0;
			count++;
		}
		else
			in_word = 1;
		s++;
	}
	return (count);
}

static size_t	word_len(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_strsplit(const char *s, char c)
{
	char	*buffer;
	char	**split_s;
	size_t	len;
	int		i;

	buffer = ft_strtrim(s, &c);
	if (!s || !buffer)
		return (0);
	split_s = (char **) malloc((count_words(buffer, c) + 1) * sizeof(char *));
	i = 0;
	while (*buffer)
	{
		if (*buffer == c)
		{
			buffer++;
			continue ;
		}
		len = word_len(buffer, c);
		split_s[i] = (char *) malloc((len + 1) * sizeof(char));
		ft_strlcpy(split_s[i], (const char *)buffer, len + 1);
		i++;
		buffer += len;
	}
	split_s[i] = 0;
	return (split_s);
}
