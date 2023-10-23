/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ottouti <ottouti@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:44:27 by ottouti           #+#    #+#             */
/*   Updated: 2023/10/23 15:46:32 by ottouti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isdigit(int dig);
int		ft_isascii(int c);
int		ft_isprint(char c);
int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *ptr, int value, size_t len);
void	ft_bzero(void *ptr, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif