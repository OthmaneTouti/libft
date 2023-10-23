/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:47:50 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/20 12:09:26 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	sub_s = (char *) malloc(len * sizeof(char));
	if (!sub_s)
		return (0);
	ft_strlcpy(sub_s, (s + start), len + 1);
	return (sub_s);
}
