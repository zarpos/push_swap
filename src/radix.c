/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:16:55 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/25 19:22:54 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	bit_len(t_list **stack)
{
	t_list	*temp;
	int		pos;
	int		bits;

	temp = *stack;
	pos = temp->index;
	bits = 0;
	while (temp)
	{
		if (pos < temp->index)
			pos = temp->index;
		temp = temp->next;
	}
	while ((pos >> bits) != 0)
		bits++;
	return (bits);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int		bits;
	int		i;
	int		total_bits;
	int		fixed_size;

	temp = *stack_a;
	bits = 0;
	fixed_size = ft_lstsize(temp);
	total_bits = bit_len(stack_a);
	while (bits < total_bits)
	{
		i = 0;
		while (i++ < fixed_size)
		{
			temp = *stack_a;
			if (((temp->index >> bits) & i) == 1)
				ra(stack_a, 'a');
			else
				pb(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		bits++;
	}
}
