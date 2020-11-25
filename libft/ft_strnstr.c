/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:21:39 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 18:09:30 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int l;
	unsigned int i;

	l = 0;
	while (haystack[l] && (l < len))
	{
		i = 0;
		while (haystack[l + i] == needle[i] && needle[i] && (l + i < len))
			i++;
		if (!needle[i])
			return ((char*)&haystack[l]);
		l++;
	}
	if (!needle[0])
		return ((char*)&haystack[l]);
	return (0);
}
