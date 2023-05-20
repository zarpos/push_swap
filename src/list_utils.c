/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:33:19 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/18 18:43:19 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*ret;

	ret = malloc(sizeof (t_list) * 1);
	if (!ret)
		return (NULL);
	ret->value = value;
    ret->index = -1;
	ret->next = NULL;
	return (ret);
}