/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 00:41:42 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/18 11:47:01 by drubio-m         ###   ########.fr       */
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

// It will add each argument to one element on the list, 
void	first_stack(t_list **stack, char *argv[], int argc)
{
	int i;
	int j;
	char **arguments;
	
	i = 1;
	while (i < argc)
	{
		j = 0;
		arguments = ft_split(argv[i], ' ');
		while (arguments[j])
		{
			if (!check_num(arguments[j]))
			{
				ft_lstadd_back(stack, ft_lstnew(ft_atoi(arguments[j])));
				free(arguments[j]);
				j++;
			}
			else
				ft_error();
		}
		free(arguments);
		i++;
	} 
	return ;
}

void check_duplicates(t_list *stack)
{
	t_list *check;
	
	while (stack)
	{
		check = stack->next;
		while (check)
		{
			if (stack->value == check->value)
				ft_error();
			check = check->next;
		}
		stack = stack->next;
	}	
	return ;
}