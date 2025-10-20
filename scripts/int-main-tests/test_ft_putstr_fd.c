/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 03:36:02 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/20 03:36:16 by tessaadi         ###   ########.fr       */
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

	remove("tmp");
	fd = open("tmp", O_CREAT | O_RDWR  | O_TRUNC);
	printf("fd : %d\n", fd);
	if (fd == -1)
		printf("ERROR in open!\n");
	s2 = (char *)malloc(20);
	s1 = "1234567890";
	ft_putstr_fd(s1, fd);
	close(fd);
	fd = open("tmp", O_RDWR);
	printf("fd : %d\n", fd);
        if (fd == -1)
                printf("ERROR in open!\n");
	read(fd, (void *)s2, 10);
	close(fd);
	printf("s2 : %s\n", s2);

	if (ft_strncmp(s2,s1,10) != 0)
	{
		printf("Error in ft_putstr_fd Function ❌\n");
	}
	else
	{
		printf("ft_putstr_fd Function is Correct ✅\n");
	}
}

