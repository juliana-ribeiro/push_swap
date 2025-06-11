/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_resources.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:37:49 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:37:49 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"

void	free_resources(char **numbers, long long *numbers_list, t_node **stack)
{
	if (numbers)
		free_splited(numbers);
	if (numbers_list)
		free(numbers_list);
	if (stack && *stack)
		free_stack(stack);
}
