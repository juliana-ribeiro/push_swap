/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:41:42 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:41:42 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

static int	get_max_bits(t_node *stack)
{
	int	max_index;
	int	bits;

	max_index = 0;
	bits = 0;
	while (stack)
	{
		if (stack->index > max_index)
			max_index = stack->index;
		stack = stack->next;
	}
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_node **a, t_node **b)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	max_bits = get_max_bits(*a);
	while (i < max_bits)
	{
		j = 0;
		size = stack_size(*a);
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
