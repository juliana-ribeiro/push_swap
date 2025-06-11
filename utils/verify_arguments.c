/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:44:01 by juribeir          #+#    #+#             */
/*   Updated: 2025/06/11 10:44:01 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_digits(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	if (str[i - 1] == '+' || str[i - 1] == '-')
		return (1);
	return (0);
}

int	verify_equals(long long *numbers, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (numbers[i] == numbers[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	process_numbers(char **numbers, long long *numbers_list, int *count)
{
	int			j;
	long long	value;

	j = 0;
	while (numbers[j])
	{
		if (check_digits(numbers[j]))
		{
			free_resources(numbers, NULL, NULL);
			return (1);
		}
		value = ft_atol(numbers[j]);
		if (value < -2147483648 || value > 2147483647)
		{
			free_resources(numbers, NULL, NULL);
			return (1);
		}
		numbers_list[*count] = value;
		(*count)++;
		j++;
	}
	free_resources(numbers, NULL, NULL);
	return (0);
}

int	process_argument(char *arg, long long *numbers_list, int *count)
{
	char		**numbers;
	long long	value;

	if (!arg || arg[0] == '\0')
		return (1);
	if (ft_strchr(arg, ' '))
	{
		numbers = ft_split(arg, ' ');
		if (!numbers)
			return (1);
		if (process_numbers(numbers, numbers_list, count))
			return (1);
	}
	else
	{
		if (check_digits(arg))
			return (1);
		value = ft_atol(arg);
		if (value < -2147483648 || value > 2147483647)
			return (1);
		numbers_list[*count] = value;
		(*count)++;
	}
	return (0);
}

long long	*verify_arguments(int ac, char **av, int *count)
{
	long long	*numbers_list;
	int			i;

	i = 0;
	*count = 0;
	numbers_list = (long long *)ft_calloc(1000, sizeof(long long));
	if (!numbers_list)
		return (NULL);
	while (++i < ac)
	{
		if (process_argument(av[i], numbers_list, count))
		{
			free_resources(NULL, numbers_list, NULL);
			return (NULL);
		}
	}
	if (verify_equals(numbers_list, *count))
	{
		free_resources(NULL, numbers_list, NULL);
		return (NULL);
	}
	return (numbers_list);
}
