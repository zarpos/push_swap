/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:52:53 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/21 19:00:29 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	end = *lst;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
}
