/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:44:55 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/21 07:18:00 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(long n)
{
	int	num_len;

	num_len = 0;
	if (n <= 0)
	{
		n = -n;
		num_len++;
	}
	while (n > 0)
	{
		n /= 10;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	int		num_len;
	char	*str;
	long	num;

	num = (long)n;
	num_len = get_num_len(num);
	str = (char *)malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str[num_len] = '\0';
	if (num == 0)
		str[0] = num + '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num)
	{
		str[num_len - 1] = (num % 10) + '0';
		num /= 10;
		num_len--;
	}
	return (str);
}

/* #include <stdio.h>
int	main(void)
{
	char *test = ft_itoa(-12345);
	printf("%s", test);
	free(test);
} */