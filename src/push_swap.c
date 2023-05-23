/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:25:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/23 18:04:54 by drubio-m         ###   ########.fr       */
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

	
	hola->value = 5;
	a->value = 4;
	b->value = 8;
	c->value = 1;
	d->value = 2;
	hola->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;

	temp = hola; 


	// adios->value = 5;
	// e->value = 7;
	// f->value = 8;
	// adios->next = e;
	// e->next = f;
	// f->next = NULL;

	// temp2 = adios; 
	printf("stack_a %d\n", temp->value);
	printf("stack_a %d\n", temp->next->value);
	printf("stack_a %d\n", temp->next->next->value);
	printf("stack_a %d\n", temp->next->next->next->value);
	//printf("stack_a %d\n", temp->next->next->next->next->value);
	
	printf("\n\n\n");
/*
	printf("stack_b %d\n", temp2->value);
	printf("stack_b %d\n", temp2->next->value);
	printf("stack_b %d\n", temp2->next->next->value);
	printf("stack_b %d\n", temp2->next->next->next->value);
	*/
	
	org5(&hola, &adios);
	temp = hola;
//	temp2 = adios;
	printf("\n\n\n");

	while(temp)
	{
		printf("stack_A %d\n", temp->value);
		temp = temp->next;
	} 
	
	printf("\n");
/*
	while(temp2)
	{
		printf("stack_B %d\n", temp2->value);
		temp2 = temp2->next;
	}
*/
	return (0);
}