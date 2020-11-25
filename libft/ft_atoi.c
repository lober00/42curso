/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:19:11 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/18 18:39:41 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	unsigned long int	l;
	unsigned int		i;
	unsigned int		p;

	l = 0;
	i = 0;
	p = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p = p * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + str[i] - 48;
		i++;
	}
	return (l * p);
}
