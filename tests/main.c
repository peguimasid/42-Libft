/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/15 12:40:23 by guilhermoma      ###   ########.fr       */
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
	content = 0;
}

int	main(void)
{
	t_list	*list;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	int		len;

	list = ft_lstnew((void *)1);
	elem2 = ft_lstnew((void *)2);
	ft_lstadd_back(&list, elem2);
	elem3 = ft_lstnew((void *)3);
	ft_lstadd_back(&list, elem3);
	elem4 = ft_lstnew((void *)4);
	ft_lstadd_back(&list, elem4);
	elem5 = ft_lstnew((void *)5);
	ft_lstadd_back(&list, elem5);
	elem6 = ft_lstnew((void *)6);
	ft_lstadd_back(&list, elem6);
	printf("------ BEFORE: ------\n");
	print_list(list);
	printf("\n");
	len = ft_lstsize(list);
	printf("length = %d\n", len);
	// Remove the content from elem 3 and free that node
	ft_lstclear(&elem2, &ft_del);
	// Uncomment the following two lines to stop see garbage values
	// elem3 = NULL;
	// elem2->next = NULL;
	printf("------ AFTER: ------\n");
	print_list(list);
	printf("\n");
	len = ft_lstsize(list);
	printf("length = %d\n", len);
	return (0);
}
