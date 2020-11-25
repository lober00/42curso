/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:34:23 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 15:10:08 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	l;
	unsigned char	*ptr;

	l = 0;
	ptr = (unsigned char*)s;
	while (l < n)
	{
		if (ptr[l] == (unsigned char)c)
			return (&(ptr)[l]);
		l++;
	}
	return (NULL);
}
