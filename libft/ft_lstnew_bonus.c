/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:14:06 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/21 19:03:00 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*ret;

	ret = malloc(sizeof (t_list) * 1);
	if (!ret)
		return (NULL);
	ret->value = value;
	ret->next = NULL;
	return (ret);
}
