/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/11 15:21:09 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	// 0
	ft_putnbr_fd(0, 2);
	printf("\n");
	// 5
	ft_putnbr_fd(5, 1);
	printf("\n");
	// -5
	ft_putnbr_fd(-5, 2);
	printf("\n");
	// 42
	ft_putnbr_fd(42, 1);
	printf("\n");
	// -57
	ft_putnbr_fd(-57, 2);
	printf("\n");
	// 164189
	ft_putnbr_fd(164189, 1);
	printf("\n");
	// -987441
	ft_putnbr_fd(-987441, 2);
	printf("\n");
	// 2147483647
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
	// -2147483648
	ft_putnbr_fd(-2147483648LL, 2);
	return (0);
}
