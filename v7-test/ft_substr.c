/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:53:22 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 22:39:31 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = (size_t)start;
	if (i >= ft_strlen(s))
		return (ft_strdup(""));
	k = (size_t)start;
	while (s[k] && (k - (size_t)start) <= len)
		k++;
	str = (char *)malloc(k - (size_t)start + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
