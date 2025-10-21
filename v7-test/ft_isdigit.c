/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:25:10 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 11:57:35 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	letter;

	if (ft_isascii(c) == 0)
		return (0);
	letter = (char)c;
	if (letter >= '0' && letter <= '9')
		return (2048);
	return (0);
}
