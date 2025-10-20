/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:19:13 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 03:38:03 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
int	main()
{
	if (ft_strlen("0123456789") != strlen("0123456789") || ft_strlen("A") != strlen("A") || ft_strlen("") != strlen(""))
	{
		printf("Error in ft_strlen Function ❌\n");
	}
	else
	{
		printf("ft_strlen Function is Correct ✅\n");
	}
}

