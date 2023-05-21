/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:31:19 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/21 19:11:21 by drubio-m         ###   ########.fr       */
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
	
	if (ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		while(*stack_a)
			*stack_a = (*stack_a)->next;
		(*stack_a)->next = temp;
	}
	return ;
}

void	rb(t_list **stack_b)
{
	t_list *temp;
	
	if (ft_lstsize(*stack_b) > 1)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = NULL;
		while(*stack_b)
			*stack_b = (*stack_b)->next;
		(*stack_b)->next = temp;
	}
	return ;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	
	if (ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		while(*stack_a)
			*stack_a = (*stack_a)->next;
		(*stack_a)->next = temp;
	}
	temp = NULL;
	if (ft_lstsize(*stack_b) > 1)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = NULL;
		while(*stack_b)
			*stack_b = (*stack_b)->next;
		(*stack_b)->next = temp;
	}
	return ;
}

void	rra(t_list **stack_a)
{
	t_list *temp;
	if (ft_lstsize(*stack_a) > 1)
	{
		while((*stack_a)->next != NULL)
			*stack_a = (*stack_a)->next;
		temp = *stack_a;
		(*stack_a)->next = NULL;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	return ;
}

void	rrb(t_list **stack_b)
{
	t_list *temp;
	if (ft_lstsize(*stack_b) > 1)
	{
		while((*stack_b)->next != NULL)
			*stack_b = (*stack_b)->next;
		temp = *stack_b;
		(*stack_b)->next = NULL;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	return ;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	if (ft_lstsize(*stack_a) > 1)
	{
		while((*stack_a)->next != NULL)
			*stack_a = (*stack_a)->next;
		temp = *stack_a;
		(*stack_a)->next = NULL;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	temp = NULL;
	if (ft_lstsize(*stack_b) > 1)
	{
		while((*stack_b)->next != NULL)
			*stack_b = (*stack_b)->next;
		temp = *stack_b;
		(*stack_b)->next = NULL;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	return ;
}

/*
int main(void)
{
	t_lista *hola;
	t_lista	*a;
	t_lista *b;
	t_lista *c;
	t_lista *temp;
	
	hola = (t_lista *)malloc(sizeof(t_lista));
	temp = (t_lista *)malloc(sizeof(t_lista));
	a = (t_lista *)malloc(sizeof(t_lista));
	b = (t_lista *)malloc(sizeof(t_lista));
	hola->value = 1;
	a->value = 2;
	b->value = 3;
	c->value = 4;
	c->next = NULL;
	b->next = c;
	a->next = b;
	hola->next = a;

	temp = hola; 
	printf("valor %d\n", temp->value);
	printf("valor %d\n", temp->next->value);
	printf("valor %d\n", temp->next->next->value);
	printf("valor %d\n", temp->next->next->next->value);

	rra(&hola);
	temp = hola;
	printf("\n");
	while(temp)
	{
		printf("valor %d\n", temp->value);
		temp = temp->next;
	}
 	printf("valor %d\n", hola->value);
	printf("valor %d\n", hola->next->value);
	printf("valor %d\n", hola->next->next->value); 
	return (0);
}
*/