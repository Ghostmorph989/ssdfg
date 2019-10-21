/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:55:03 by malaoui           #+#    #+#             */
/*   Updated: 2019/10/16 22:00:10 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst)
	{
		ft_lstdelone((*lst), del);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}