/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:12:46 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/17 18:25:22 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	char	letter;

	if (ft_isascii(c) == 0)
		return (0);
	letter = (char)c;
	if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z'))
	{
		return (1024);
	}
	return (0);
}
