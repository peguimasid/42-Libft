/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:50:20 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/03 14:34:22 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*dest_tmp;
	const char	*src_tmp;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dest_tmp = (char *)dst;
	src_tmp = (const char *)src;
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}
