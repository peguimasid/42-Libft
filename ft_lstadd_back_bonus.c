/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 10:25:18 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/14 10:35:43 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tail = ft_lstlast(*alst);
	tail->next = new;
}
