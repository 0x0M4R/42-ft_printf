/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdalla <oabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:13:41 by oabdalla          #+#    #+#             */
/*   Updated: 2021/10/26 14:50:33 by oabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include "stdarg.h"
# include <stdlib.h>

typedef struct s_format
{
	va_list		args;
	int			count;
	char		option;
	const char	*str;
}	t_format;

int			ft_printf(const char *str, ...);
const char	*set_struct(const char *str, t_format *input);
void		print_option(t_format *input);
t_format	*init_struct(t_format *input);

#endif