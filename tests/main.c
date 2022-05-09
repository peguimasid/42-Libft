/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/09 18:52:53 by guilhermoma      ###   ########.fr       */
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

static void	check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int	main(int argc, const char *argv[])
{
	char	*set;
	char	*s1;

	// Chars to remve (\t, space, \n)
	set = ft_strdup("\t \n");
	// Test 1 => "lorem \n ipsum \t dolor \n sit \t amet"
	s1 = ft_strdup("lorem \n ipsum \t dolor \n sit \t amet");
	check_strtrim(s1, set);
	// Test 2 => "lorem ipsum dolor sit amet"
	s1 = ft_strdup("lorem ipsum dolor sit amet \n \t ");
	check_strtrim(s1, set);
	// Test 3 =>  "lorem ipsum dolor sit amet"
	s1 = ft_strdup(" \n \t lorem ipsum dolor sit amet");
	check_strtrim(s1, set);
	// Test 4 => "lorem \n ipsum \t dolor \n sit \t amet"
	s1 = ft_strdup("  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ");
	check_strtrim(s1, set);
	// Test 5 => ""
	s1 = ft_strdup("          ");
	check_strtrim(s1, set);
	return (0);
}
