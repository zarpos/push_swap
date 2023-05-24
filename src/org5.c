/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   org5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:39:28 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/24 14:11:27 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	org5(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
	{
		sa(stack_a);
		return ;
	}
	if (ft_lstsize(*stack_a) == 3)
	{
		org3a(stack_a);
		return ;
	}
	while (ft_lstsize(*stack_a) != 3)
	{
		if (get_index(*stack_a, get_min(*stack_a)) == 0)
			pb(stack_a, stack_b);
		else
			ra(stack_a, 'a');
	}
	org3a(stack_a);
	pa(stack_a, stack_b);
	if ((*stack_b))
	{
		pa(stack_a, stack_b);
	}
	return ;
}
