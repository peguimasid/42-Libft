/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/04 13:40:21 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;

	str = strdup("Learningisfun");
	char *first, *second;
	first = str;
	second = str;
	printf("Original string :%s\n ", str);
	// when overlap happens then it just ignore it
	memcpy(first + 8, first, 10);
	printf("memcpy overlap : %s\n ", str);
	// when overlap it start from first position
	memmove(second + 8, first, 10);
	printf("memmove overlap : %s\n ", str);
	return (0);
}
