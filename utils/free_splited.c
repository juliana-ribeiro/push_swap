/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_splited.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:37:55 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:37:55 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_splited(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i] != NULL)
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}
