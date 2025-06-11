/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:40:21 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:40:21 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_remove_first(t_node **head)
{
	t_node	*current;

	if (*head != NULL)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return ;
		}
		current = *head;
		*head = current->next;
		free(current);
	}
}
