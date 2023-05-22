/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:25:11 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/22 21:27:54 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int get_index(t_list *stack_a, int number)
{
    int ret;

    ret = 1;
    while (stack_a->value != number)
    {
        stack_a = stack_a->next;
        ret++;
    }
    return (ret);
}