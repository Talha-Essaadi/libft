/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:30:09 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 16:23:01 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (c);
	letter = (char)c;
	if (letter >= 'a' && letter <= 'z')
		return (c - 32);
	return (c);
}
