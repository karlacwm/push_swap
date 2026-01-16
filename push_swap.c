/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:35:25 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/16 15:36:09 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunk_size(int size)
{
	if (size <= 100)
		return ();
	else if (size <= )
		return ();
	return (size / );
}

int	push_swap(int argc, char **argv)
{
	t_node	*a;
	char	*join_all;
	char	**each_int;

	if (argc < 2)
		return (0);
	join_all = combine_argv(argc, argv);
	each_int = ft_split(join_all, ' ');
	build_stack_a(&a, each_int);
	indexing(a);
	int	size = stack_size(a);
	if (size == 2)
		sort_two(&a);
	else if (size == 3)
		sort_three(&a);
}

// ./push_swap "1 4 3 5 2"
// ./push_swap 1 2 3 4 5
