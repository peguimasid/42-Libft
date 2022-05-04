/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:43:20 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/04 18:05:32 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = dst_len;
	// if destsize is zero, do nothing and return srclen
	if (dstsize == 0)
		return (src_len);
	// if dstsize is less than dst_len, do nothing and return src_len + dstsize
	// we need this because if we just concat if dstsize is bigger than dst_len
	if (dstsize < dst_len)
		return (src_len + dstsize);
	// continously add src chars to the end of dst while have char in src[i]
	while (src[i] && (dst_len + i) < dstsize)
		dst[j++] = src[i++];
	// adiciona caracter nulo no final caso o tamanho da string de destino
	// seja exatamente igual ao tamanho dstsize, para não ocorrer overflow
	if ((dst_len + i) == dstsize && dst_len < dstsize)
		dst[--j] = '\0';
	else
		dst[j] = '\0';
	return (src_len + dst_len);
}
