/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/07 20:54:52 by guilhermoma      ###   ########.fr       */
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

static void	check_strjoin(char *s1, char *s2)
{
	char	*strjoin;

	if (!(strjoin = ft_strjoin(s1, s2)))
		ft_print_result("NULL");
	else
		ft_print_result(strjoin);
	if (strjoin == s1 || strjoin == s2)
		ft_print_result("\nA new string was not returned");
	else
		free(strjoin);
}

int	main(int argc, const char *argv[])
{
	char	*s1;
	char	*s2;

	s1 = ft_strdup("lorem ipsum");
	s2 = ft_strdup("dolor sit amet");
	// TEST 1
	check_strjoin(s1, s2);
	// TEST 2
	// s1[0] = '\0';
	// check_strjoin(s1, s2);
	// TEST 3
	// s2[0] = '\0';
	// check_strjoin(s1, s2);
	// TEST 4
	// s1[0] = '\0';
	// s2[0] = '\0';
	// check_strjoin(s1, s2);
	return (0);
}

// lorem ipsumdolor sit amet
// dolor sit amet
// lorem ipsum
// <Empty>