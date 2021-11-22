/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:39 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/25 14:33:55 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbru(unsigned int nb, int count)
{
	if (nb >= 10)
	{
		count = ft_putnbru(nb / 10, count);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		count++;
	}
	return (count);
}
