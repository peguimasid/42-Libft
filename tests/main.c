/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/12 14:53:52 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	print_list(t_list *current_node)
{
	void	*p;

	while (current_node)
	{
		p = current_node->content;
		printf("%zu", (size_t)p);
		if (current_node->next)
			printf(" -> ");
		current_node = current_node->next;
	}
}

int	main(void)
{
	t_list	*list;
	t_list	*new_node;

	list = ft_lstnew((void *)3);
	new_node = ft_lstnew((void *)2);
	ft_lstadd_front(&list, new_node);
	new_node = ft_lstnew((void *)1);
	ft_lstadd_front(&list, new_node);
	print_list(list);
	return (0);
}
