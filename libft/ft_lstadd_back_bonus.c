/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:49:40 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/18 17:16:02 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	lst = *alst;
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
		lst->next = new;
	}
	else
		*alst = new;
}
