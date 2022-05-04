/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:50:20 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/04 14:54:42 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest_tmp;
	char	*src_tmp;

	dest_tmp = (char *)dst;
	src_tmp = (char *)src;
	if (dst == src)
		return (dst);
	if (src_tmp < dest_tmp)
	{
		while (len--)
			*(dest_tmp + len) = *(src_tmp + len);
		return (dst);
	}
	while (len--)
		*dest_tmp++ = *src_tmp++;
	return (dst);
}
