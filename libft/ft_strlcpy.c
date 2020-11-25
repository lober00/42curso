/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:35:02 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 16:52:14 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	l;
	unsigned int	i;
	unsigned int	p;

	l = 0;
	p = 0;
	i = dstsize;
	if (!dst || !src)
		return (0);
	while (src[l])
		l++;
	while (src[p] != '\0' && dstsize > 1)
	{
		dst[p] = src[p];
		p++;
		dstsize--;
	}
	if (dstsize > 0)
		dst[p] = '\0';
	return (l);
}
