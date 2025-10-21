/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:47:55 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/21 23:31:25 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*acc;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	acc = *lst;
	while (acc != NULL)
	{
		next = acc->next;
		ft_lstdelone(acc, del);
		acc = next;
	}
	*lst = NULL;
}
