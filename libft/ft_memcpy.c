/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:49:11 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 14:51:05 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		l;
	unsigned char		*dest;
	unsigned const char	*source;

	l = 0;
	dest = dst;
	source = src;
	if (dest != '\0' || source != '\0')
	{
		while (l < n)
		{
			dest[l] = source[l];
			l++;
		}
		return (dest);
	}
	else
		return (NULL);
}
