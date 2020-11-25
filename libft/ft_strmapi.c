/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:32:02 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 16:21:02 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	l;
	char			*aux;

	if (s == '\0')
		return (0);
	l = 0;
	while (s[l])
		l++;
	aux = (char*)malloc((l + 1) * sizeof(char));
	if (aux != '\0')
	{
		l = 0;
		while (s[l])
		{
			aux[l] = f(l, s[l]);
			l++;
		}
		aux[l] = '\0';
		return (aux);
	}
	else
		return (0);
}
