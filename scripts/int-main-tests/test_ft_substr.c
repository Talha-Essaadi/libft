/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 03:35:01 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 03:35:16 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
int	main()
{
	printf("str : %s\n",ft_substr("0123456789", 4, 5));
	if (ft_strncmp(ft_substr("0123456789",5 , 10),"56789",5) != 0
			|| ft_strncmp(ft_substr("0123456789",0 , 10),"0123456789",10) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 10),"9",1) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 1),"9",1) != 0
			|| ft_strncmp(ft_substr("0123456789",9 , 0),"",1) != 0)
	{
		printf("Error in ft_substr Function ❌\n");
	}
	else
	{
		printf("ft_substr Function is Correct ✅\n");
	}
}
