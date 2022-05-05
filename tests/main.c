/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/05 16:26:25 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void	ft_print_result(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void	check_memchr(void *s, char c, int n)
{
	const char	*str;

	str = ft_memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
	printf("\n");
}

int	main(int argc, const char *argv[])
{
	int	arg;

	check_memchr("bonjour", 'o', 1);
	check_memchr("bonjour", 'b', 4);
	check_memchr("bonjour", 'o', 7);
	check_memchr("bonjourno", 'n', 2);
	check_memchr("bonjour", 'j', 6);
	check_memchr("bonjour", 's', 7);
	
	int	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s", (char *)memchr(tab, -1, 7));
	return (0);
}
