/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 15:52:22 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	printf("%d\n", atoi("0") == ft_atoi("0"));
	printf("%d\n", atoi("546:5") == ft_atoi("546:5"));
	printf("%d\n", atoi("-4886") == ft_atoi("-4886"));
	printf("%d\n", atoi("+548") == ft_atoi("+548"));
	printf("%d\n", atoi("054854") == ft_atoi("054854"));
	printf("%d\n", atoi("000074") == ft_atoi("000074"));
	printf("%d\n", atoi("+-54") == ft_atoi("+-54"));
	printf("%d\n", atoi("-+48") == ft_atoi("-+48"));
	printf("%d\n", atoi("--47") == ft_atoi("--47"));
	printf("%d\n", atoi("++47") == ft_atoi("++47"));
	printf("%d\n", atoi("+47+5") == ft_atoi("+47+5"));
	printf("%d\n", atoi("-47-5") == ft_atoi("-47-5"));
	printf("%d\n", atoi("\e475") == ft_atoi("\e475"));
	printf("%d\n", atoi("\t\n\r\v\f  469 \n") == ft_atoi("\t\n\r\v\f  469 \n"));
	printf("%d\n", atoi("-2147483648") == ft_atoi("-2147483648"));
	printf("%d\n", atoi("2147483647") == ft_atoi("2147483647"));
	printf("%d\n", atoi("\t\n\r\v\fd469 \n") == ft_atoi("\t\n\r\v\fd469 \n"));
	printf("%d\n", atoi("\n\n\n  -46\b9 \n5d6") == ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("%d\n", atoi("") == ft_atoi(""));
	return (0);
}
