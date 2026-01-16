/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:41:44 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/16 15:08:04 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*put_value(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = content;
	new->index = -1;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_node *find_last_node(t_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);

}

void	stack_add_back(t_node **stack, t_node *new_node)
{
	t_list	*last_node;

	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	last_node = find_last_node(*stack);
	last_node->next = new_node;
	new_node->prev = last_node;
}
