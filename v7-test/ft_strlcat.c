/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:31:11 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 11:33:55 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dest_length;
	size_t	i;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	i = 0;
	if (dest_length >= size || size == 0)
	{
		return (size + src_length);
	}
	i = 0;
	while (src[i] && (dest_length + i + 1) < size)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = '\0';
	return (src_length + dest_length);
}
