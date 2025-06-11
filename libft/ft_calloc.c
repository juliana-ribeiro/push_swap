/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 03:47:11 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/25 13:57:35 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;

	if (size > (18446744073709551615UL / nmemb))
		return (NULL);
	total_size = nmemb * size;
	ptr = (unsigned char *) malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return ((void *)ptr);
}


int main(void)
{
	#include <stdio.h>
	printf("%p", ft_calloc(0, 0));
	return (0);
}