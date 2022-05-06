/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:52:10 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 14:48:06 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem",
				15) == strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum",
				15) == strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("%d\n",
			ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor ", "ipsum",
					35) == strnstr("lorem ipsum dolor sit lorem ipsum dolor ",
					"ipsum", 35));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "",
				10) == strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm",
				30) == strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "dol",
				30) == strnstr("lorem ipsum dolor sit amet", "dol", 30));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur",
				30) == strnstr("lorem ipsum dolor sit amet", "consectetur",
				30));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "sit",
				10) == strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor",
				15) == strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%d\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor",
				0) == strnstr("lorem ipsum dolor sit amet", "dolor", 0));
	return (0);
}
