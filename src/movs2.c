/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:58:03 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 17:02:33 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **stack_a, char mov)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		temp2 = *stack_a;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		*stack_a = temp->next;
		temp->next = NULL;
		temp2->next = temp;
	}
	if (mov == 'a')
		ft_putstr_fd("ra\n", 1);
	return ;
}

void	rb(t_list **stack_b, char mov)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_b) > 1)
	{
		temp = *stack_b;
		temp2 = *stack_b;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		*stack_b = temp->next;
		temp->next = NULL;
		temp2->next = temp;
	}
	if (mov == 'b')
		ft_putstr_fd("rb\n", 1);
	if (mov == 'r')
		ft_putstr_fd("rr\n", 1);
	return ;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 'r');
	rb(stack_b, 'r');
}

