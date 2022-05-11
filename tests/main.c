/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/11 14:01:12 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void	ft_print_result(char const *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	f(unsigned int pos, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		// 0123456789
		ft_putchar_fd(i, 1);
		i++;
	}
	printf("\n");
	i = 58;
	while (i <= 64)
	{
		// :;<=>?@
		ft_putchar_fd(i, 2);
		i++;
	}
	printf("\n");
	i = 'A';
	while (i <= 'Z')
	{
		// ABCDEFGHIJKLMNOPQRSTUVWXYZ
		ft_putchar_fd(i, 1);
		i++;
	}
	printf("\n");
	i = 91;
	while (i <= 96)
	{
		// [\]^_`
		ft_putchar_fd(i, 2);
		i++;
	}
	printf("\n");
	i = 'a';
	while (i <= 'z')
	{
		// abcdefghijklmnopqrstuvwxyz
		ft_putchar_fd(i, 1);
		i++;
	}
	printf("\n");
	i = 123;
	while (i <= 127)
	{
		// {|}~
		ft_putchar_fd(i, 2);
		i++;
	}
	return (0);
}
