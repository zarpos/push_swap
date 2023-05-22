/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:59:08 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 17:03:05 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rra(t_list **stack_a, char mov)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_a) > 1)
	{
		temp2 = *stack_a;
		while (temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_a;
		*stack_a = temp2;
		temp->next = NULL;
	}
	if (mov == 'a')
		ft_putstr_fd("rra\n", 1);
	return ;
}

void	rrb(t_list **stack_b, char mov)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_b) > 1)
	{
		temp2 = *stack_b;
		while (temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_b;
		*stack_b = temp2;
		temp->next = NULL;
	}
	if (mov == 'b')
		ft_putstr_fd("rrb\n", 1);
	if (mov == 'r')
		ft_putstr_fd("rrr\n", 1);
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 'r');
	rrb(stack_b, 'r');
}