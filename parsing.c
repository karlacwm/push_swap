/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 11:26:24 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/16 13:05:46 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_integers(char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	if (!*str)
		return (1);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

int	check_duplicates(t_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

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

void	build_stack_a(t_node **a, char **argv, int argc)
{
	int		i;
	long	n;
	t_node	*new_node;

	i = 1;
	while (argv[i])
	{
		if (check_integers(argv[i]))
			free_error(a);
		n = ft_atol(argv[i]);
		if (n > 2147483647 || n < -2147483648)
			free_error(a);
		if (check_duplicates(*a, (int)n))
			free_error(a);
		new_node = put_value();
		if (!new_node)
			free_error(a);
		// add to bottom of stack ft_lstaddback
		i++;
	}
}

