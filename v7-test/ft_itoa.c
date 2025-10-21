/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:35:46 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 21:08:10 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse_string(int i, char *str)
{
	int		len;
	char	c;

	len = ft_strlen(str) - 1;
	while (i < len)
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
}

static void	ft_itoa_logic(int n, char *str, int i)
{
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		sign;
	char	*str;

	i = 0;
	sign = 0;
	str = (char *)malloc(20);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[i] = '-';
		n = -n;
		sign = 1;
		i++;
	}
	ft_itoa_logic(n, str, i);
	ft_reverse_string(sign, str);
	return (str);
}
