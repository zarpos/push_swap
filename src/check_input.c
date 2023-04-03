/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:41:42 by drubio-m          #+#    #+#             */
/*   Updated: 2023/04/03 17:31:35 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// It will check that the arguments are number. (1 = Error, 0 = Success)
int	check_num(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (((str[i] == '-' || str[i] == '+') && len > 1) || ft_isdigit(str[i]))
	{
		while (str[i])
		{
			i++;
			if (!ft_isdigit(str[i]))
				return (1);
		}
		return (0);
	}
	return (1);
}
