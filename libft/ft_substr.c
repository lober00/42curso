/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:15:01 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/22 11:02:20 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		l;
	char				*str;

	if (!s)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	l = ft_strlen(s);
	if (l < start)
	{
		ft_bzero(str, len);
		return (str);
	}
	l = 0;
	while (l < len && s[start])
	{
		str[l] = s[start];
		l++;
		start++;
	}
	str[l] = '\0';
	return (str);
}
