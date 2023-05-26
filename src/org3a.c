/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   org3a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:41:42 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/26 16:54:46 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	org3a(t_list **stack)
{
	int	min;
	int	max;

	min = get_min(*stack);
	max = get_max(*stack);
	if ((*stack)->value == min && (*stack)->next->value == max)
	{
		rra(stack, 'a');
		sa(stack);
	}
	else if ((*stack)->value == max && (*stack)->next->value != min)
	{
		sa(stack);
		ra(stack, 'a');
	}
	else if ((*stack)->value == max && (*stack)->next->value == min)
		ra(stack, 'a');
	else if ((*stack)->next->value == min && ft_lstlast(*stack)->value == max)
		sa(stack);
	else if ((*stack)->next->value == max && ft_lstlast(*stack)->value == min)
		rra(stack, 'a');
}
