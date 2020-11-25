/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:25:49 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 16:12:27 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	l;

	l = 0;
	while ((l < n) && (s1[l] || s2[l]))
	{
		if (s1[l] != s2[l])
		{
			l = ((unsigned char*)s1)[l] - ((unsigned char*)s2)[l];
			return (l);
		}
		l++;
	}
	return (0);
}
