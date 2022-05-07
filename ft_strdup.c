/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:16:11 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 21:24:41 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = ft_strlen(s1);
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result = ft_memcpy(result, s1, len);
	return (result);
}
