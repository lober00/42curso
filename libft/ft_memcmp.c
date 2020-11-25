/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:00:27 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 15:13:45 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				retrn;
	unsigned int	l;

	l = 0;
	retrn = 0;
	while (l < n)
	{
		if (((unsigned char*)s1)[l] != ((unsigned char*)s2)[l])
		{
			retrn = ((unsigned char*)s1)[l] - ((unsigned char*)s2)[l];
			return (retrn);
		}
		l++;
	}
	return (retrn);
}
