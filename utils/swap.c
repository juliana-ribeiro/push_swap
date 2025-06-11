/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:43:17 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:43:17 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node **stack)
{
	t_node	*first;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		*stack = (*stack)->next;
		first->next = (*stack)->next;
		(*stack)->next = first;
	}
}
