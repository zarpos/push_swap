/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:31:19 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 16:24:41 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/*
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_lista
{
	int				value;
	int				index;
	struct s_lista	*next;
}	t_lista; 
*/
void	sa(t_list **stack_a)
{
	t_list	*swap;
	t_list	*swap2;
	
	swap = *stack_a; //swap = 2 1 3
	swap2 = swap->next; // swap2 = 1 y 3
	*stack_a = swap2; // stack = 1 y 3
	swap->next = swap2->next; // swap = 2 y 3
    swap2->next = swap; // swap2 = 1 2 3
	return ;
}

void	sb(t_list **stack_b)
{
	t_list	*swap;
	t_list	*swap2;
	
	swap = *stack_b;
	swap2 = swap->next;
	*stack_b = swap2;
	swap->next = swap2->next;
    swap2->next = swap;
	return ;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*swap;
	t_list	*swap2;
	
	swap = *stack_a;
	swap2 = swap->next;
	*stack_a = swap2;
	swap->next = swap2->next;
    swap2->next = swap;
	swap = NULL;
	swap2 = NULL;
	swap = *stack_b;
	swap2 = swap->next;
	*stack_b = swap2;
	swap->next = swap2->next;
    swap2->next = swap;
	return ;
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	
	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	return ;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	
	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	return ;
}

void	ra(t_list **stack_a)
{
	t_list *temp;
	t_list *temp2;
	
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
	return ;
}

void	rb(t_list **stack_b)
{
	t_list *temp;
	t_list *temp2;
	
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
	return ;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	t_list *temp2;
	
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
	temp = NULL;
	temp2 = NULL;
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
	return ;
}

void	rra(t_list **stack_a)
{
	t_list *temp;
	t_list *temp2;
	if (ft_lstsize(*stack_a) > 1)
	{
		temp2 = *stack_a;
		while(temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_a;
		*stack_a = temp2;
		temp->next = NULL;
	}
	return ;
}

void	rrb(t_list **stack_b)
{
	t_list *temp;
	t_list *temp2;
	if (ft_lstsize(*stack_b) > 1)
	{
		temp2 = *stack_b;
		while(temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_b;
		*stack_b = temp2;
		temp->next = NULL;
	}
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	t_list *temp2;
	if (ft_lstsize(*stack_a) > 1)
	{
		temp2 = *stack_a;
		while(temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_a;
		*stack_a = temp2;
		temp->next = NULL;
	}
	temp = NULL;
	temp2 = NULL;

	if (ft_lstsize(*stack_b) > 1)
	{
		temp2 = *stack_b;
		while(temp2->next != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
		}
		temp2->next = *stack_b;
		*stack_b = temp2;
		temp->next = NULL;
	}
	return ;
}
