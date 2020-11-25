/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:01:27 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/12 10:47:32 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		l;
	char	b;

	l = 0;
	b = (unsigned char)c;
	while (s[l] != b)
	{
		if (!s[l])
			return (NULL);
		l++;
	}
	return (&((char*)s)[l]);
}
