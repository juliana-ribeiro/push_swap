/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:46:15 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/19 07:59:20 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	number = (long int)n;
	if (number < 0)
	{
		number = -number;
		write(fd, "-", 1);
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	number = (number % 10) + '0';
	write(fd, &number, 1);
}
