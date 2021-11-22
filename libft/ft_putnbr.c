/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:02:47 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/25 14:34:30 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb, int count)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar(-(nb / 1000000000) + 48);
		nb = nb % 200000000;
		nb = -nb;
		count += 2;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		count++;
	}
	if (nb >= 10)
	{
		count = ft_putnbr(nb / 10, count);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		count++;
	}
	return (count);
}
