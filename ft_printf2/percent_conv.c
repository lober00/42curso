/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:33:58 by lolivero          #+#    #+#             */
/*   Updated: 2020/09/28 10:34:11 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		percent_conv(t_flags flags)
{
	int		rtn;

	rtn = 0;
	if (flags.minus)
	{
		ft_putchar_fd('%', 1);
		if (flags.zero)
			rtn += ft_adjust(flags.width - 1, '0');
		else
			rtn += ft_adjust(flags.width - 1, ' ');
	}
	else if (!flags.minus)
	{
		if (flags.zero)
			rtn += ft_adjust(flags.width - 1, '0');
		else
			rtn += ft_adjust(flags.width - 1, ' ');
		ft_putchar_fd('%', 1);
	}
	return (rtn + 1);
}
