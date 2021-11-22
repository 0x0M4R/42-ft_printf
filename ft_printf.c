/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:15:39 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/26 14:12:33 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

t_format	*init_struct(t_format *input)
{
	input->count = 0;
	input->option = 0;
	input->str = 0;
	return (input);
}

void	print_option(t_format *input)
{
	char	*cpy;

	if (input->option == 'c')
		input->count += ft_putchar(va_arg(input->args, int));
	if (input->option == 's')
	{
		cpy = va_arg(input->args, char *);
		if (cpy)
			input->count += ft_putstr(cpy);
		else
			input->count += write(1, "(null)", 6);
	}
	if (input->option == 'p')
		input->count = write(1, "0x", 2)
			+ ft_putp(va_arg(input->args, unsigned long), input->count);
	if (input->option == 'i' || input->option == 'd')
		input->count = ft_putnbr(va_arg(input->args, int), input->count);
	if (input->option == 'u')
		input->count = ft_putnbru(
				va_arg(input->args, unsigned int), input->count);
	if (input->option == 'x' || input->option == 'X')
		input->count = ft_puthex(
				va_arg(input->args, unsigned int), input->count, input->option);
	if (input->option == '%')
		input->count += ft_putchar('%');
}

const char	*set_struct(const char *str, t_format *input)
{
	int		i;
	char	*opt;

	i = 0;
	opt = "cspdiuxX%";
	if (ft_strchr(opt, str[i]))
	{
		input->option = str[i];
		i++;
	}
	print_option(input);
	return (str + i);
}

int	ft_printf(const char *str, ...)
{
	int			count;
	t_format	*input;

	input = malloc(sizeof(t_format));
	input = init_struct(input);
	input->str = str;
	va_start(input->args, str);
	while (*input->str)
	{
		while (!(*(input->str) == '%') && *input->str)
		{
			write(1, input->str, 1);
			(input->str)++;
			input->count++;
		}
		if (*input->str == '%' && *input->str)
			(input->str) = set_struct(input->str + 1, input);
	}
	va_end(input->args);
	count = input->count;
	free(input);
	return (count);
}
/*
#include <stdio.h>
int main()
{
    int p;
	ft_printf(" %d",ft_printf("Helloo %s hi %c num %p",NULL,'m',0));
	printf(" %d",printf("\nHelloo %s hi %c num %p",NULL,'m',0));
	//printf("\nHelloo %s hi %s","yooooo","mannnnnn");
	//printf("%0010i",1234);
}*/