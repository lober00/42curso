/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:42:59 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/22 12:01:16 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		begin(char *s1, char *set)
{
	int		l;
	int		p;

	p = 0;
	l = 0;
	while (s1[l])
	{
		while (set[p])
		{
			if (s1[l] == set[p])
				break ;
			p++;
		}
		if (set[p] == '\0')
			break ;
		p = 0;
		l++;
	}
	return (l);
}

static int		last(char *s1, char *set, int l)
{
	int p;

	p = 0;
	while (l > 0)
	{
		while (set[p])
		{
			if (set[p] == s1[l])
				break ;
			p++;
		}
		if (set[p] == '\0')
			break ;
		p = 0;
		l--;
	}
	return (l);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		l;
	int		begn;
	int		p;
	char	*aux;

	if (s1 == '\0' || set == '\0')
		return (0);
	l = ft_strlen((char*)s1);
	begn = begin((char*)s1, (char*)set);
	if (l == begn)
		return (ft_strdup(""));
	l = last((char*)s1, (char*)set, l - 1);
	if (!(aux = (char*)malloc(sizeof(char) * (l - begn + 2))))
		return (0);
	p = 0;
	while (begn <= l)
	{
		aux[p] = ((char*)s1)[begn];
		p++;
		begn++;
	}
	aux[p] = '\0';
	return (aux);
}
