/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:44:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/18 13:23:37 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	size_t;

int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isdigit(int dig);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_strlen(char *str);
void	*ft_memset(void *ptr, int value, size_t len);
void	ft_bzero(void *ptr, size_t size);

#endif