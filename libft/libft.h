/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:21:18 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/26 14:49:56 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nb, int count);
int		ft_putnbru(unsigned int nb, int count);
int		ft_puthex(unsigned int n, int count, int c);
int		ft_putp(unsigned long n, int count);

#endif
