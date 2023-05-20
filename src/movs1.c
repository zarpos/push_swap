/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movs1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:31:19 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/20 19:33:10 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../include/push_swap.h"
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

void	sa(t_lista **stack)
{
	t_lista *temp;
	t_lista *temp2;

	temp = *stack;
	*stack = temp->next;
	(*stack)->next = NULL;
	temp2 = temp->next->next;
	temp->next = NULL;
	temp->next = temp2;
	(*stack)->next = temp;

	t_lista	*swap;
	t_lista	*swap2;
	
	swap = *stack; //swap = 2 1 3
	swap2 = swap->next; // swap2 = 1 y 3
	*stack = swap2; // stack = 1 y 3
	swap->next = swap2->next; // swa
    swap2->next = swap;
}

int main(void)
{
	t_lista *hola;
	t_lista	*a;
	t_lista *b;
	t_lista *temp;
	
	hola = (t_lista *)malloc(sizeof(t_lista));
	temp = (t_lista *)malloc(sizeof(t_lista));
	a = (t_lista *)malloc(sizeof(t_lista));
	b = (t_lista *)malloc(sizeof(t_lista));
	hola->value = 2;
	a->value = 1;
	b->value = 3;
	b->next = NULL;
	a->next = b;
	hola->next = a;

	temp = hola; 
	printf("valor %d\n", temp->value);
	printf("valor %d\n", temp->next->value);
	printf("valor %d\n", temp->next->next->value);
	sa(&hola);
	temp = hola;
	while(temp)
	{
		printf("valor %d\n", tem->value);
		temp = temp->next;
	}
/* 	printf("valor %d\n", hola->value);
	printf("valor %d\n", hola->next->value);
	printf("valor %d\n", hola->next->next->value); */
	return (0);
}
