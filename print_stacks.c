/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 11:12:31 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/19 10:38:32 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_node *a, t_node *b)
{
	printf("Stack A: \n");
	while (a)
	{
		printf("[%d] %d\n", a->index, a->value);
		a = a->next;
	}
	printf("Stack B: \n");
	while (b)
	{
		printf("[%d] %d\n", b->index, b->value);
		b = b->next;
	}
	printf("------------------ \n");
}
