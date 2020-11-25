/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:23:50 by lolivero          #+#    #+#             */
/*   Updated: 2020/11/13 11:13:53 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		special_putchar(char c)
{
	int	rtn;

	rtn = 0;
	if (c != '%')
	{
		write(1, &c, 1);
		rtn++;
	}
	return (rtn);
}

int		ft_printf(const char *input, ...)
{
	va_list args;
	t_flags	flags;
	int		rtn;
	int		i;

	i = 0;
	rtn = 0;
	va_start(args, input);
	while (input[i])
	{
		rtn += special_putchar(input[i]);
		if (input[i] == '%' && input[i + 1])
		{
			i++;
			flags = init_flags(flags);
			flags = parser_flags(&input[i], flags, args);
			while (is_flag(input[i]))
				i++;
			rtn += parser_conv(input[i], flags, args);
			i += flags.advance;
		}
		i++;
	}
	return (rtn);
}
