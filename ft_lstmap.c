/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:50:07 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/16 19:23:04 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;

	if (!lst || !f || !del)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (0);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		tail->next = ft_lstnew(f(lst->content));
		if (!tail->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		tail = tail->next;
		lst = lst->next;
	}
	tail->next = NULL;
	return (head);
}
