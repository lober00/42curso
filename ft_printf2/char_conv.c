/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:26:56 by lolivero          #+#    #+#             */
/*   Updated: 2020/09/28 10:42:54 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		char_conv(t_flags flags, va_list args)
{
	if (flags.minus && flags.width > 1)
	{
		ft_putchar_fd(va_arg(args, int), 1);
		ft_adjust(flags.width - 1, ' ');
		return (flags.width);
	}
	else if (!flags.minus && flags.width > 1)
		ft_adjust(flags.width - 1, ' ');
	ft_putchar_fd(va_arg(args, int), 1);
	if (flags.width > 1)
		return (flags.width);
	return (1);
}
