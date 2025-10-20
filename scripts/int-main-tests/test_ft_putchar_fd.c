/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:35:37 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 03:37:05 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	main()
{
	int	fd;
	char	*s1;
	char	*s2;

	fd = open("tmp1", O_CREAT | O_WRONLY | O_TRUNC);
	if (fd == -1)
		printf("ERROR in open!\n");
	s2 = (char *)malloc(20);
	s1 = "A";
	close(fd);
	ft_putchar_fd(s1[0], fd);
	fd = open("tmp1",O_RDONLY);
	read(fd, (void *)s2, 1);
	close(fd);
	printf("s2 : %s\n", s2);

	if (ft_strncmp(s2,s1,1) != 0)
	{
		printf("Error in ft_putchar_fd Function ❌\n");
	}
	else
	{
		printf("ft_putchar_fd Function is Correct ✅\n");
	}
}

