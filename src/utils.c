/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:32:38 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/25 18:37:45 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_sorted(t_list *stack)
{
	t_list	*temp;
	int		sorted;

	sorted = 0;
	if (!stack)
		return (sorted);
	temp = stack;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (sorted);
		temp = temp->next;
	}
	sorted = 1;
	return (sorted);
}
