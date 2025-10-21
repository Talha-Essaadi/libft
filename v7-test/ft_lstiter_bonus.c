/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:31:13 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/15 16:06:38 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*acc;

	if (lst == NULL || f == NULL)
		return ;
	acc = lst;
	while (acc != NULL)
	{
		f(acc->content);
		acc = acc->next;
	}
}
