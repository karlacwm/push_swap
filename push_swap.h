/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 19:47:58 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/11 16:35:26 by wcheung          ###   ########.fr       */
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

int		push_swap(int argc, char **argv);
void	print_stacks(t_node *a, t_node *b);
void	sort_three(t_node **stack_a);
int		check_integers(char *str);
int		check_duplicates(t_node *a, int n);

#endif
