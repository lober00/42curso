/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:36:05 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 15:33:04 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	l;
	unsigned int	i;
	void			*aux;

	l = count * size;
	i = 0;
	aux = malloc(l);
	if (aux != 0)
	{
		while (i < l)
		{
			((char*)aux)[i] = 0;
			i++;
		}
		return (aux);
	}
	return (0);
}
