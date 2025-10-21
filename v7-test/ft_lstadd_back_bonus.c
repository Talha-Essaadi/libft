/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:40:50 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 23:22:25 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*acc;

	if (lst == NULL || new == NULL)
		return ;
	acc = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (acc->next != NULL)
		acc = acc->next;
	acc->next = new;
}
