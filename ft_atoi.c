/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:13:25 by gmasid            #+#    #+#             */
/*   Updated: 2022/05/17 16:31:05 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f'
		|| c == ' ');
}

static int	check(int a)
{
	if (a > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	long	aux;
	int		sign;
	size_t	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		aux = result;
		result = (str[i] - '0') + (result * 10);
		if (result < aux)
			return (check(sign));
		i++;
	}
	return (result * sign);
}
