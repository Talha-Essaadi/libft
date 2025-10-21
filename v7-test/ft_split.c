/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <tessaadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 21:52:28 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 17:03:26 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_strings(const char *str, char c)
{
	int	strings_count;
	int	i;

	i = 0;
	strings_count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			strings_count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (strings_count);
}

static void	ft_insert_2(char **strings, const char *start_str,
		const char *end_str, int *j)
{
	int	k;

	k = 0;
	while (k < (end_str - start_str))
	{
		strings[*j][k] = start_str[k];
		k++;
	}
	strings[*j][k] = '\0';
	(*j)++;
}

static int	ft_insert(char **strings, const char *str, char c)
{
	int			i;
	int			j;
	const char	*start_str;
	const char	*end_str;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			start_str = &str[i];
			while (str[i] && str[i] != c)
				i++;
			end_str = &str[i];
			strings[j] = malloc(((end_str - start_str) + 1) * sizeof(char));
			if (strings[j] == NULL)
				return (-1);
			ft_insert_2(strings, start_str, end_str, &j);
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		strings_count;
	char	**strings;

	strings_count = count_strings(s, c);
	strings = (char **)malloc((strings_count + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	strings[strings_count] = NULL;
	if (ft_insert(strings, s, c) == -1)
		return (NULL);
	return (strings);
}
