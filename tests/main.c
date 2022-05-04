/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/04 18:06:58 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	*dest;
	char	*dest2;
	size_t	result1;
	size_t	result2;
	size_t	size;

	size = 7;
	src = strdup("dia");
	dest = strdup("bom");
	dest2 = strdup("bom");
	result1 = strlcat(dest, src, size);
	result2 = ft_strlcat(dest2, src, size);
	printf("first >>%s\n", dest);
	printf("first>>%i\n", (int)result1);
	printf("sec >>%s\n", dest2);
	printf("sec>>%i\n", (int)result2);
	return (0);
}
