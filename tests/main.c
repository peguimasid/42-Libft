/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/05 15:29:55 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_print_result(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_print_result(strncmp("salut", "salut",
					5)) == ft_print_result(ft_strncmp("salut", "salut", 5)));
	printf("%d\n", ft_print_result(strncmp("test", "testss",
					7)) == ft_print_result(ft_strncmp("test", "testss", 7)));
	printf("%d\n", ft_print_result(strncmp("testss", "test",
					7)) == ft_print_result(ft_strncmp("testss", "test", 7)));
	printf("%d\n", ft_print_result(strncmp("test", "tEst",
					4)) == ft_print_result(ft_strncmp("test", "tEst", 4)));
	printf("%d\n", ft_print_result(strncmp("", "test",
					4)) == ft_print_result(ft_strncmp("", "test", 4)));
	printf("%d\n", ft_print_result(strncmp("test", "",
					4)) == ft_print_result(ft_strncmp("test", "", 4)));
	printf("%d\n", ft_print_result(strncmp("abcdefghij", "abcdefgxyz",
					3)) == ft_print_result(ft_strncmp("abcdefghij",
					"abcdefgxyz", 3)));
	printf("%d\n", ft_print_result(strncmp("abcdefgh", "abcdwxyz",
					4)) == ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz",
					4)));
	printf("%d\n", ft_print_result(strncmp("zyxbcdefgh", "abcdwxyz",
					0)) == ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz",
					0)));
	printf("%d\n", ft_print_result(strncmp("abcdefgh", "",
					0)) == ft_print_result(ft_strncmp("abcdefgh", "", 0)));
	printf("%d\n", ft_print_result(strncmp("test\200", "test\0",
					6)) == ft_print_result(ft_strncmp("test\200", "test\0",
					6)));
	return (0);
}