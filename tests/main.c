/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/14 10:48:23 by guilhermoma      ###   ########.fr       */
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
	t_list	*last_node;
	int		list_len;

	list = ft_lstnew((void *)4);
	// ADD IN BEGINNING
	new_node = ft_lstnew((void *)3);
	ft_lstadd_front(&list, new_node);
	// ADD IN BEGINNING
	new_node = ft_lstnew((void *)2);
	ft_lstadd_front(&list, new_node);
	// ADD IN BEGINNING
	new_node = ft_lstnew((void *)1);
	ft_lstadd_front(&list, new_node);
	print_list(list);
	printf("\n");
	list_len = ft_lstsize(list);
	last_node = ft_lstlast(list);
	printf("lenght = %d\n", list_len);
	printf("last node val = %zu\n", (size_t)last_node->content);
	// ADD IN END
	new_node = ft_lstnew((void *)9);
	ft_lstadd_back(&list, new_node);
	print_list(list);
	printf("\n");
	list_len = ft_lstsize(list);
	last_node = ft_lstlast(list);
	printf("lenght = %d\n", list_len);
	printf("last node val = %zu\n", (size_t)last_node->content);
	return (0);
}
