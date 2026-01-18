/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:04:20 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/18 15:56:32 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	chunk_size(int size)
{
	if (size <= 100)
		return (15);
	else if (size <= 500)
		return (33);
}

void	k_sort(t_node **a, t_node **b, int size)
{
	// ra when int is too big
	// pb when int is within chunk
	// pb rb when int is the smallest
	int	chunk;

	chunk = chunk_size(size);

}

// push int from a to b in roughly sorted chunks = k_sort
// need chunk size
// in many algorithms, most efficient way: divide a set by its square root
// for push swap, sqaure root x 1.5: lowest move count
