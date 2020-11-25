/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:36:41 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 16:34:47 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content)
{
	t_list *begin;

	if (!(begin = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	begin->content = (void*)content;
	begin->next = NULL;
	return (begin);
}
