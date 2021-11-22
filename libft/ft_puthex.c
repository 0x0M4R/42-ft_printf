/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:47 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/25 14:35:33 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int n, int count, int c)
{
	char	*hexa;
	int		c2;

	if (c == 'x')
		hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		count = ft_puthex(n / 16, count, c);
		n = n % 16;
	}
	if (n < 16)
	{
		c2 = hexa[n];
		write(1, &c2, 1);
		count++;
	}
	return (count);
}
