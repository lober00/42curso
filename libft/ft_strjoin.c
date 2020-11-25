/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:37:01 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 16:22:26 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	l;
	unsigned int	i;
	char			*aux;

	if (s1 == '\0' || s2 == '\0')
		return (0);
	l = ft_strlen(s1);
	i = ft_strlen(s2);
	aux = (char*)malloc(sizeof(char) * (i + l + 1));
	if (aux == '\0')
		return (0);
	l = 0;
	i = 0;
	while (((char*)s1)[l])
	{
		aux[l] = ((char*)s1)[l];
		l++;
	}
	while (((char*)s2)[i])
	{
		aux[l++] = ((char*)s2)[i];
		i++;
	}
	aux[l] = '\0';
	return (aux);
}
