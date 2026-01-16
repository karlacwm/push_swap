/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:47:58 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/16 22:19:31 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct	s_node
{
	int			value;
	int			index;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

void	free_stack(t_node **stack);
void	free_errors(t_node **a);
int		check_integers(char *str);
int		check_duplicates(t_node *a, int n);
long	ft_atol(const char *str);
void	build_stack_a(t_node **a, char **argv);
void	print_stacks(t_node *a, t_node *b);
void	push(t_node **from_stack, t_node **to_stack);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
int		stack_size(t_node *stack);
int		*stack_to_array(t_node *stack, int size);
void	*bubble_sort(int *array, int size);
void	indexing(t_node *stack);
void	reverse_rotate(t_node **stack);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	rotate(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	sort_two(t_node **a);
void	sort_three(t_node **a);
void	sort_four(t_node **a, t_node **b);
void	sort_five(t_node **a, t_node **b);
void	swap(t_node **stack);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
t_node	*put_value(int content);
t_node	*find_last_node(t_node *stack);
void	stack_add_to_end(t_node **stack, t_node *new_node);
char	*combine_argv(int argc, char **argv);
int		push_swap(int argc, char **argv);
void	print_stacks(t_node *a, t_node *b);
void	sort_three(t_node **stack_a);

#endif
