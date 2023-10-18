/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:44:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/18 11:39:01 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned int	t_size;

int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isdigit(int dig);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_strlen(char *str);
void	*ft_memset(void *ptr, int value, t_size len);
void	ft_bzero(void *ptr, t_size size);
void	*ft_memcpy(void *dst, const void *src, t_size len);
void	*ft_memmove(void *dst, const void *src, t_size len);

#endif