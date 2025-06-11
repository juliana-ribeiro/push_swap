/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:38:06 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:38:06 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_first(t_node **head, int value)
{
	t_node	*new;

	new = ft_create_node(value);
	if (!new)
		return ;
	new->next = *head;
	*head = new;
}
