/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:25:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/06/01 16:22:24 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		sorted;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	first_stack(&stack_a, argv, argc);
	check_duplicates(stack_a);
	indexing_node(&stack_a);
	sorted = check_sorted(stack_a);
	if (sorted == 1)
	{
		ft_free_stack(&stack_a);
		return (0);
	}
	if (ft_lstsize(stack_a) <= 5 && ft_lstsize(stack_a) > 1)
		org5(&stack_a, &stack_b);
	if (ft_lstsize(stack_a) > 5)
		radix(&stack_a, &stack_b);
	while (stack_a)
	{
		ft_printf("\n%d", stack_a->value);
		stack_a = stack_a->next;
	}
	ft_free_stack(&stack_a);
	return (0);
}
