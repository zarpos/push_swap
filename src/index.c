/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:31:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/24 16:50:21 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*find_new_min(t_list **stack)
{
	t_list	*temp;
	t_list	*ret;
	int		founded;

	temp = *stack;
	ret = NULL;
	founded = 0;
	while (temp)
	{
		if ((temp->index == -1) && (founded == 0 || temp->value < ret->value))
		{
			ret = temp;
			founded = 1;
		}
		ret = ret->next;
	}
	return (ret);
}

void	indexing_node(t_list **stack)
{
	t_list	*temp;
	int		index;

	temp = find_new_min(stack);
	index = 0;
	while (temp)
	{
		temp->index = index++;
		temp->next = find_new_min(stack);
	}
	return ;
}