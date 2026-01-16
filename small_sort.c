/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 11:07:34 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/16 19:00:53 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	int	first;
	int	second;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	if (first > second)
		sa(stack_a);
}

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->index;
	second = (*stack_a)->next->index;
	third = (*stack_a)->next->next->index;
	if (first > second && first > third)
		ra(stack_a);
	else if (second > first && second > third)
		rra(stack_a);
	sort_two(stack_a);
}

void	sort_four(t_node **stack_a)
{
	pb
	sort three
}

void	sort_five(t_node **stack_a)
{
	pb twice
	sort three
}
// 3	3	2	2	1	1
// 2	1	3	1	3	2
// 1	2	1	3	2	3

