/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/10 17:58:47 by guilhermoma      ###   ########.fr       */
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

static char	mapi(unsigned int i, char c)
{
	static int	indexArray[11] = {0};
	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LoReM iPsUm");
	if (!(strmapi = ft_strmapi(str, &mapi)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(strmapi);
		if (strmapi[11] != '\0')
			ft_print_result("\nString is not null terminated");
		if (strmapi == str)
			ft_print_result("\nA new string was not returned");
		else
			free(strmapi);
	}
	free(str);
	return (0);
}
