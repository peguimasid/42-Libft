/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:00:44 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/17 11:04:30 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = count * size;
	result = malloc(total_size);
	if (total_size / count != size)
		return (NULL);
	if (!result)
		return (NULL);
	ft_bzero(result, total_size);
	return (result);
}
