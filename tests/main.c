/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/10 17:07:12 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void	ft_print_result(char *s)
{
	int	len;

	if (!s)
		write(1, "NULL", 4);
	else
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		free(s);
	}
}

int	main(void)
{
	ft_print_result(ft_itoa(0)); // 0
	printf("\n");
	ft_print_result(ft_itoa(9)); // 9
	printf("\n");
	ft_print_result(ft_itoa(-9)); // -9
	printf("\n");
	ft_print_result(ft_itoa(10)); // 10
	printf("\n");
	ft_print_result(ft_itoa(-10)); // -10
	printf("\n");
	ft_print_result(ft_itoa(8124)); // 8124
	printf("\n");
	ft_print_result(ft_itoa(-9874)); // -9874
	printf("\n");
	ft_print_result(ft_itoa(543000)); // 543000
	printf("\n");
	ft_print_result(ft_itoa(-2147483648LL)); // -2147483648
	printf("\n");
	ft_print_result(ft_itoa(2147483647)); // 2147483647
	return (0);
}
