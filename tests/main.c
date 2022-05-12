/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/12 14:30:33 by guilhermoma      ###   ########.fr       */
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
	t_list	*new_node;
	t_list	*new_node2;

	new_node = (t_list *)malloc(sizeof(t_list));
	new_node2 = (t_list *)malloc(sizeof(t_list));
	new_node->content = (void *)1;
	new_node2->content = (void *)2;
	new_node->next = new_node2;
	print_list(new_node);
	return (0);
}
