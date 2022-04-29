/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/04/29 16:54:46 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	run_char_tests(int (*orignalfunc)(int), int (*libfunc)(int))
{
	for (int i = 0; i <= 127; i++)
	{
		if ((*orignalfunc)(i) != (*libfunc)(i))
		{
			printf("---- Fail in %d ----\n", i);
			return (1);
		}
	}
	return (0);
}

int	test(int (*orignalfunc)(int), int (*libfunc)(int), char type)
{
	if (type == 'c')
		return (run_char_tests(orignalfunc, libfunc));
	return (1);
}

int	main(void)
{
	int	isalpha_test;
	int	isdigit_test;
	int	isalnum_test;
	int	isascii_test;
	int	isprint_test;

	isalpha_test = test(isalpha, ft_isalpha, 'c');
	isdigit_test = test(isdigit, ft_isdigit, 'c');
	isalnum_test = test(isalnum, ft_isalnum, 'c');
	isascii_test = test(isascii, ft_isascii, 'c');
	isprint_test = test(isprint, ft_isprint, 'c');
	printf("isalpha = %s\n", isalpha_test == 0 ? "OK" : "FAIL");
	printf("isdigit = %s\n", isdigit_test == 0 ? "OK" : "FAIL");
	printf("isalnum = %s\n", isalnum_test == 0 ? "OK" : "FAIL");
	printf("isprint = %s\n", isprint_test == 0 ? "OK" : "FAIL");
}
