/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 12:39:57 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	printf("%d %d\n", ft_memcmp("salut", "salut", 5), memcmp("salut", "salut",
				5));
	printf("%d %d\n", ft_memcmp("t\200", "t\0", 2), memcmp("t\200", "t\0", 2));
	printf("%d %d\n", ft_memcmp("testss", "test", 5), memcmp("testss", "test",
				5));
	printf("%d %d\n", ft_memcmp("test", "tEst", 4), memcmp("test", "tEst", 4));
	printf("%d %d\n", ft_memcmp("", "test", 4), memcmp("", "test", 4));
	printf("%d %d\n", ft_memcmp("test", "", 4), memcmp("test", "", 4));
	printf("%d %d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7),
			memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d %d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6), memcmp("abcdefgh",
				"abcdwxyz", 6));
	printf("%d %d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0),
			memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}
