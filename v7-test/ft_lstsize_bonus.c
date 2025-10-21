/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:35:24 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/19 18:01:48 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*acc;

	if (lst == NULL)
		return (0);
	acc = lst;
	i = 0;
	while (acc != NULL)
	{
		i++;
		acc = acc->next;
	}
	return (i);
}
