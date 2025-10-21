/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:14:44 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 17:17:37 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contain(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_strtrim_logic(char const *s1, char *str, int len, int k)
{
	int	j;

	j = 0;
	while (k < len)
	{
		str[j] = s1[k];
		j++;
		k++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		k;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (s1[0] == '\0' || set == NULL || set[0] == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	len--;
	while (len >= 0 && ft_contain(s1[len], set) == 1)
		len--;
	k = 0;
	len++;
	while (s1[k] && ft_contain(s1[k], set) == 1)
		k++;
	str = (char *)malloc(len - k + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
