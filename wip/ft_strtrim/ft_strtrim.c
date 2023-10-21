/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:01:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/21 18:19:39 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len_set;
	size_t	len_s1;
	char	*trimmed_str;

	len_set = ft_strlen((char *)set);
	len_s1 = ft_strlen((char *)s1);
	trimmed_str = (char *) malloc(len_s1 - 2 * len_set);
	if (trimmed_str!)
		return (0);
	if (!ft_strncmp(s1, set, len_set)
		&& !ft_strncmp((s1 + len_s1 - len_set), set, len_set))
		ft_strlcpy(trimmed_str, s1 + len_set, len_s1 - (2 * len_set) + 1);
	else
		return ((char *)s1);
	return (trimmed_str);
}
