/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:52:30 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 17:59:18 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	l;
	unsigned int	p;
	char			*aux;

	l = ft_strlen(s1);
	p = 0;
	aux = malloc(l + 1);
	if (aux != 0)
	{
		while (l > p)
		{
			aux[p] = ((char*)s1)[p];
			p++;
		}
		aux[p] = '\0';
		return (aux);
	}
	else
		return (NULL);
}
