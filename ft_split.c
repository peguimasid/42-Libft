/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhermomasid <guilhermomasid@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:28:20 by guilhermoma       #+#    #+#             */
/*   Updated: 2022/05/10 15:20:22 by guilhermoma      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*dup_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		dup_start_index;
	char	**result;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	j = 0;
	dup_start_index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && dup_start_index < 0)
			dup_start_index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && dup_start_index >= 0)
		{
			result[j++] = dup_word(s, dup_start_index, i);
			dup_start_index = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
