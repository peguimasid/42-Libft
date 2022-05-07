/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 21:33:23 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	*str;
	char	*str_dup;

	str = "lorem ipsum dolor sit amet";
	if (!(str_dup = ft_strdup(str)))
		printf("NULL");
	else
		printf("%s\n", str_dup);
	if (str_dup == str)
		printf("\nstr_dup's adress == str's adress");
	else
		free(str_dup);
}
