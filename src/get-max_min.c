/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get-max_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:16:25 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 21:21:45 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int get_min(t_list *stack_a)
{
    int min;
    
    min = stack_a->value;
    while (stack_a)
    {
        if (min > stack_a->value)
            min = stack_a->value;
        stack_a = stack_a->next;
    }
    return (min);
}

int get_max(t_list *stack_a)
{
    int max;
    
    max = stack_a->value;
    while (stack_a)
    {
        if (max < stack_a->value)
            max = stack_a->value;
        stack_a = stack_a->next;
    }
    return (max);
}
