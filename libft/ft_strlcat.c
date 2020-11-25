/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:43:27 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/13 12:09:25 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int l;
	unsigned int i;
	unsigned int p;

	l = 0;
	i = 0;
	p = 0;
	while (dst[l] && l < dstsize)
		l++;
	i = l;
	while (src[l - i] && l + 1 < dstsize)
	{
		dst[l] = src[l - i];
		l++;
	}
	if (i < dstsize)
		dst[l] = '\0';
	return (i + ft_strlen(src));
}
