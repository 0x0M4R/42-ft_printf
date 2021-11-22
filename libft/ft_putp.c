/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:27 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/25 14:32:28 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putp(unsigned long n, int count)
{
	char	*hexa;
	int		c2;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		count = ft_putp(n / 16, count);
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
