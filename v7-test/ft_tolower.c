/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:47:15 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 16:24:24 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (c);
	letter = (char)c;
	if (letter >= 'A' && letter <= 'Z')
		return (c + 32);
	return (c);
}
