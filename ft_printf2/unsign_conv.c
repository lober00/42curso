/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsign_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <lolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:35:53 by lolivero          #+#    #+#             */
/*   Updated: 2020/11/17 12:58:00 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsign_adjust(t_flags flags, int len)
{
	int	rtn;

	rtn = 0;
	if (flags.zero && !flags.minus && flags.precision < 0)
		rtn += ft_adjust(flags.width - len, '0');
	else if (flags.precision >= len)
		rtn += ft_adjust(flags.width - flags.precision, ' ');
	else
		rtn += ft_adjust(flags.width - len, ' ');
	return (rtn);
}

int	unsign_precision(int precision, int len)
{
	int	i;

	i = 0;
	if (precision)
		while (i < precision - len)
		{
			write(1, "0", 1);
			i++;
		}
	return (i);
}

int	unsign_minus(t_flags flags, int len, char *str)
{
	int	rtn;

	rtn = 0;
	if (flags.minus)
	{
		rtn += unsign_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
		rtn += unsign_adjust(flags, len);
	}
	else if (!flags.minus)
	{
		rtn += unsign_adjust(flags, len);
		rtn += unsign_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
	}
	return (rtn);
}

int	unsign_conv(t_flags flags, va_list args)
{
	char				*str;
	int					len;
	unsigned int		rtn;

	str = ft_itoau(va_arg(args, unsigned int));
	len = ft_strlen(str);
	rtn = 0;
	if (flags.precision == 0 && *str == '0')
	{
		rtn += ft_adjust(flags.width, ' ');
		free(str);
		return (rtn);
	}
	rtn += unsign_minus(flags, len, str);
	free(str);
	return (rtn);
}
