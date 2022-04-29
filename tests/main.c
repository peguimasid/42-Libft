/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/04/29 16:27:50 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>

int	test(int (*orignalfunc)(int), int (*libfunc)(int))
{
	for (int i = 0; i <= 127; i++)
	{
		if ((*orignalfunc)(i) != (*libfunc)(i))
		{
			return (1);
		}
	}
	return (0);
}

int	main(void)
{
	printf("isalpha = %s\n", test(isalpha, ft_isalpha) == 0 ? "OK" : "FAIL");
	printf("isdigit = %s\n", test(isdigit, ft_isdigit) == 0 ? "OK" : "FAIL");
	printf("isalnum = %s\n", test(isalnum, ft_isalnum) == 0 ? "OK" : "FAIL");
}
