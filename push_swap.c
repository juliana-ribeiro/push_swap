/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:30:36 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/10 16:31:49 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_four(t_node **a, t_node **b)
{
	int	min_index;

	min_index = get_min_index(*a);
	while (min_index > 0)
	{
		if (min_index <= 2)
			ra(a);
		else
			rra(a);
		min_index = get_min_index(*a);
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

static void	sort_five(t_node **a, t_node **b)
{
	int	min_index;

	while (stack_size(*a) > 3)
	{
		min_index = get_min_index(*a);
		while (min_index > 0)
		{
			if (min_index <= stack_size(*a) / 2)
				ra(a);
			else
				rra(a);
			min_index = get_min_index(*a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

static int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static void	do_sort(t_node **a, t_node **b)
{
	if (!is_sorted(*a))
	{
		if (stack_size(*a) == 2 && (*a)->value > (*a)->next->value)
			sa(a);
		else if (stack_size(*a) == 3)
			sort_three(a);
		else if (stack_size(*a) == 4)
			sort_four(a, b);
		else if (stack_size(*a) == 5)
			sort_five(a, b);
		else
		{
			assign_indexes(*a);
			radix_sort(a, b);
		}
	}
	free_stack(a);
	free_stack(b);
}

int	main(int argc, char **argv)
{
	long long	*numbers_list;
	t_node		*a;
	t_node		*b;
	int			count;
	int			i;

	a = NULL;
	b = NULL;
	count = 0;
	i = -1;
	if (argc < 2)
		return (write(2, "Error\n", 6), 0);
	numbers_list = verify_arguments(argc, argv, &count);
	if (!numbers_list)
		return (write(2, "Error\n", 6), 0);
	while (++i < count)
		ft_add_last(&a, (int)numbers_list[i]);
	do_sort(&a, &b);
	free(numbers_list);
	return (0);
}
