/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:25:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 16:56:34 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>


/*
int main(int argc, char *argv[])
{
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		ft_error();
	first_stack(&stack_a, argv, argc);
	check_duplicates(stack_a);
	return (0);
}
*/



/*
int main(void)
{
	t_list *hola;
	t_list	*a;
	t_list *b;
	t_list *c;
	t_list *temp;

	t_list *adios;
	t_list	*d;
	t_list *e;
	t_list *f;
	t_list *temp2;
	
	hola = (t_list *)malloc(sizeof(t_list));
	temp = (t_list *)malloc(sizeof(t_list));
	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));


	adios = (t_list *)malloc(sizeof(t_list));
	temp2 = (t_list *)malloc(sizeof(t_list));
	d = (t_list *)malloc(sizeof(t_list));
	e = (t_list *)malloc(sizeof(t_list));
	f = (t_list *)malloc(sizeof(t_list));

	
	hola->value = 1;
	a->value = 2;
	b->value = 3;
	c->value = 4;
	c->next = NULL;
	b->next = c;
	a->next = b;
	hola->next = a;

	temp = hola; 


	adios->value = 5;
	d->value = 6;
	e->value = 7;
	f->value = 8;
	f->next = NULL;
	e->next = f;
	d->next = e;
	adios->next = d;

	temp2 = adios; 
	printf("stack_a %d\n", temp->value);
	printf("stack_a %d\n", temp->next->value);
	printf("stack_a %d\n", temp->next->next->value);
	printf("stack_a %d\n", temp->next->next->next->value);
	
	printf("\n\n\n");

	printf("stack_b %d\n", temp2->value);
	printf("stack_b %d\n", temp2->next->value);
	printf("stack_b %d\n", temp2->next->next->value);
	printf("stack_b %d\n", temp2->next->next->next->value);
	
	rrb(&hola, 'r');
	temp = hola;
	temp2 = adios;
	printf("\n\n\n");
	while(temp)
	{
		printf("stack_A %d\n", temp->value);
		temp = temp->next;
	} 
	
	printf("\n");

	while(temp2)
	{
		printf("stack_B %d\n", temp2->value);
		temp2 = temp2->next;
	}



	return (0);
}
*/