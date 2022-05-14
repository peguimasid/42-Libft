/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/14 12:32:47 by guilhermoma      ###   ########.fr       */
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

static void	ft_del(void *content)
{
	content = NULL;
}

int	main(void)
{
	t_list	*list;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	int		len;

	list = ft_lstnew((void *)1);
	elem2 = ft_lstnew((void *)2);
	ft_lstadd_back(&list, elem2);
	elem3 = ft_lstnew((void *)3);
	ft_lstadd_back(&list, elem3);
	elem4 = ft_lstnew((void *)4);
	ft_lstadd_back(&list, elem4);
	print_list(list);
	printf("\n");
	ft_lstdelone(elem3, &ft_del);
	len = ft_lstsize(list);
	// Uncomment the following two lines to stop see garbage values
	// elem3 = NULL;
	// elem2->next = NULL;
	printf("%d\n", len);
	print_list(list);
	return (0);
}
