/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:47:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 17:21:21 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				len;
	int				k;
	unsigned char	*s1;
	unsigned char	*s2;

	len = (int)n;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest <= src)
	{
		k = 0;
		while (k < len)
		{
			s1[k] = s2[k];
			k++;
		}
		return (dest);
	}
	k = n - 1;
	while (k >= 0)
	{
		s1[k] = s2[k];
		k--;
	}
	return (dest);
}
