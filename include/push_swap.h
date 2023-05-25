/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:56:30 by drubio-m          #+#    #+#             */
/*   Updated: 2023/05/25 18:44:08 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

// Parse
int		check_num(char *str);
void	first_stack(t_list **stack, char *argv[], int argc);
void	check_duplicates(t_list *stack);
void	parse(t_list **stack_a, int argc, char *argv[]);

// Indexing
t_list	*find_new_min(t_list **stack);
void	indexing_node(t_list **stack);

// Movements
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, char mov);
void	rb(t_list **stack_b, char mov);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, char mov);
void	rrb(t_list **stack_b, char mov);
void	rrr(t_list **stack_a, t_list **stack_b);

// Sorting
void	org3a(t_list **stack);
void	org5(t_list **stack_a, t_list **stack_b);

// Radix
int		bit_len(t_list **stack);
void	radix(t_list **stack_a, t_list **stack_b);

// Utils
int		check_sorted(t_list *stack);
int		get_min(t_list *stack_a);
int		get_max(t_list *stack_a);
int		get_index(t_list *stack_a, int number);

#endif