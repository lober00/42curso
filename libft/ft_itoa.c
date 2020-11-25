/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:25:27 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 16:30:53 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*int_to_char(int div, int l, char *c, unsigned int nb)
{
	int dav;

	dav = 1;
	if (l == 0)
		while (div-- > 1)
			dav = dav * 10;
	else
		while (div-- > 2)
			dav = dav * 10;
	while (dav > 0)
	{
		c[l] = nb / dav + 48;
		nb = nb % dav;
		dav = dav / 10;
		l++;
	}
	c[l] = '\0';
	return (c);
}

static int		calculatediv(unsigned int n)
{
	int div;

	div = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		div++;
	}
	return (div);
}

char			*ft_itoa(int n)
{
	char					*c;
	unsigned int			nb;
	int						div;
	int						l;

	l = 0;
	if (n < 0)
	{
		nb = n * -1;
		div = calculatediv(nb);
		div = div + 1;
		if (!(c = malloc(sizeof(char) * (div + 1))))
			return (0);
		c[l] = '-';
		l++;
	}
	else
	{
		div = calculatediv(n);
		if (!(c = malloc(sizeof(char) * (div + 1))))
			return (0);
		nb = n;
	}
	return (int_to_char(div, l, c, nb));
}
