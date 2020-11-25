/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:31:44 by lolivero          #+#    #+#             */
/*   Updated: 2020/11/16 12:58:29 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ullnum_length(unsigned long long n, int b)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}

int			put_ullnbr(unsigned long long nb, char *base, char *str, int l)
{
	int		b;

	b = ft_strlen(base);
	if (l == 0)
	{
		str[l] = base[nb % b];
		return (0);
	}
	else
	{
		str[l] = base[nb % b];
		return (put_ullnbr(nb / b, base, str, --l));
	}
}

char		*ft_ulltoa_base(unsigned long long nbr, char *base)
{
	int		b;
	int		l;
	char	*str;

	b = ft_strlen(base);
	l = ullnum_length(nbr, b);
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (0);
	str[l] = '\0';
	put_ullnbr(nbr, base, str, l - 1);
	return (str);
}
