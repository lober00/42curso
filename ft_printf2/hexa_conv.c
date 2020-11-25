/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa_conv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <lolivero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:32:41 by lolivero          #+#    #+#             */
/*   Updated: 2020/11/16 13:19:15 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hexa_adjust(t_flags flags, int len)
{
	int rtn;

	rtn = 0;
	if (flags.zero && !flags.minus && flags.precision < 0)
		rtn += ft_adjust(flags.width - len, '0');
	else if (flags.precision >= len)
		rtn += ft_adjust(flags.width - flags.precision, ' ');
	else
		rtn += ft_adjust(flags.width - len, ' ');
	return (rtn);
}

int		hexa_precision(int precision, int len)
{
	int i;

	i = 0;
	if (precision)
		while (i < precision - len)
		{
			write(1, "0", 1);
			i++;
		}
	return (i);
}

int		hexa_minus(t_flags flags, int len, char *str)
{
	int rtn;

	rtn = 0;
	if (flags.minus)
	{
		rtn += hexa_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
		rtn += hexa_adjust(flags, len);
	}
	else if (!flags.minus)
	{
		rtn += hexa_adjust(flags, len);
		rtn += hexa_precision(flags.precision, len);
		rtn += ft_putstr_fd(str, 1);
	}
	return (rtn);
}

int		hexa_conv(t_flags flags, va_list args, char *base)
{
	char			*str;
	int				len;
	int				rtn;
	unsigned int	nb;

	nb = va_arg(args, unsigned int);
	if (!nb)
		str = ft_strdup("0");
	else
		str = ft_itoa_base(nb, base);
	len = ft_strlen(str);
	rtn = 0;
	if (flags.precision == 0 && *str == '0')
	{
		rtn += ft_adjust(flags.width, ' ');
		free (str);
		return (rtn);
	}
	rtn += hexa_minus(flags, len, str);
	free(str);
	return (rtn);
}
