/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:13:20 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 15:58:07 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;
	char	b;

	l = 0;
	b = (char)c;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (s[l] == b)
			return ((char*)&s[l]);
		l--;
	}
	return (0);
}
