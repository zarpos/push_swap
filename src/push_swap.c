/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:25:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/04/03 16:38:50 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// It will add each argument to one element on the list, 
// If there is only one big argument it will use split
void first_stack(t_list **stack, char *argv[], int argc)
{
    t_list  *new;
    char    **input;
    int     i;

    if (argc == 2)
       input = ft_split(argv[1], ' ');
    i = 1;
    input = argv;
    while (input[i])
    {
        new = ft_lstnew(ft_atoi(input[i]));
        ft_lstadd_back(stack, new);
        i++;
    }
    if (argc == 2)
        free_array(input);
}

int main(int argc, char *argv[])
{
    
    return (0);
}