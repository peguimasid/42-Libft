/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/05 14:56:32 by guilhermoma      ###   ########.fr       */
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

static void	check_strrchr(char *s, int c, int offset)
{
	char	*str;

	if (!(str = ft_strrchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

int	main(int argc, const char *argv[])
{
	char	*str2;
	int		arg;
	char	*str3;

	str2 = strdup("bonjour");
	alarm(5);
	check_strrchr(str2, 'b', 0);
	check_strrchr(str2, 'o', 4);
	str3 = strdup("bonjourno");
	check_strrchr(str3, 'o', 8);
	check_strrchr(str2, 'j', 3);
	check_strrchr(str2, 's', 0);
	check_strrchr(str2, '\0', 7);
	str3 = strdup("");
	check_strrchr(str3, '\0', 0);
	check_strrchr(str2 + 2, 'b', 0);
	return (0);
}
