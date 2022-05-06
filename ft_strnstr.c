/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:46:29 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/06 14:41:38 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*str;

	i = 0;
	str = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || haystack == needle)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && needle[j] != '\0' && str[i
				+ j] == needle[j] && i + j < len)
			j++;
		if (j == needle_len)
			return (str + i);
		i++;
	}
	return (0);
}
