/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/11 14:16:29 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	// lorem ipsum dolor sit amet
	ft_putstr_fd("lorem ipsum dolor sit amet", 2);
	printf("\n");
	// 		lorem
	// ipsum
	// dolor	sit amet
	ft_putstr_fd("  lorem\nipsum\ndolor\tsit amet  ", 1);
	printf("\n");
	// Nothing
	ft_putstr_fd("", 2);
	printf("\n");
	// lorem ipsum do
	ft_putstr_fd("lorem ipsum do\0lor sit amet", 1);
	return (0);
}
