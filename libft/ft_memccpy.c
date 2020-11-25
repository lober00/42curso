/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:08:10 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/12 10:47:15 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	l;

	l = 0;
	while (l < n)
	{
		((unsigned char*)dst)[l] = ((unsigned char*)src)[l];
		if (((unsigned char*)src)[l] == (unsigned char)c)
			return (&((unsigned char*)dst)[l + 1]);
		l++;
	}
	return (NULL);
}
