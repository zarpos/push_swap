/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:25:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/12 13:48:45 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



int	main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	
	
	
	return (0);
}