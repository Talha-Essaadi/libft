/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:58:10 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 11:34:26 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;

	i = 0;
	str = (char *)big;
	if (little[0] == '\0')
		return (str);
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] && little[k] && big[i + k] == little[k] && i
			+ k < len)
			k++;
		if (little[k] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
