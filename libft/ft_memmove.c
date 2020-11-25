/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:40:55 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 15:05:44 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int l;

	l = -1;
	if ((unsigned char*)dst != '\0' || (unsigned char)src != '\0')
	{
		if (((unsigned char*)src) < ((unsigned char*)dst))
			while (len-- > 0)
				((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
		else
			while (++l < len)
				((unsigned char*)dst)[l] = ((unsigned char*)src)[l];
		return (dst);
	}
	else
		return (0);
}
