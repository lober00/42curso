/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:29:55 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/20 12:41:06 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *aux;
	t_list *end;

	if (!lst)
		return (NULL);
	if (!(end = ft_lstnew(f(lst))))
		return (NULL);
	lst = lst->next;
	if (lst)
	{
		while (lst)
		{
			if (!(aux = ft_lstnew(f(lst))))
			{
				del(end);
				return (NULL);
			}
			ft_lstadd_back(&end, aux);
			aux = aux->next;
			lst = lst->next;
		}
		return (end);
	}
	return (NULL);
}
