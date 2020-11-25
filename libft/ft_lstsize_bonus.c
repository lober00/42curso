/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:28:29 by lolivero          #+#    #+#             */
/*   Updated: 2019/11/15 11:44:10 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*head;

	size = 0;
	head = lst;
	if (!head)
		return (0);
	else
	{
		while (head)
		{
			size++;
			head = head->next;
		}
		return (size);
	}
}
