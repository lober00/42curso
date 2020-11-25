/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:33:22 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/11 14:34:11 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	l;
	unsigned char	*baux;

	l = 0;
	baux = (unsigned char*)b;
	while (l < len)
	{
		baux[l] = (unsigned char)c;
		l++;
	}
	return (baux);
}
