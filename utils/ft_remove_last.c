/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:40:33 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:40:33 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_remove_last(t_node **head)
{
	t_node	*current;
	t_node	*previous;

	current = *head;
	previous = NULL;
	if (*head != NULL)
	{
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		previous->next = NULL;
		free(current);
	}
}
