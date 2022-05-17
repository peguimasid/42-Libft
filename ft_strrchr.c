/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:52:01 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/17 11:16:33 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			result = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		result = (char *)(s + i);
	return (result);
}
