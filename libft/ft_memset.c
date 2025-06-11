/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:43:31 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/19 08:02:11 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	char	test1[10] = "Hello";
	char	test2[10] = "Hello";
	char	test3[10] = "Hello";
	char	test4[10] = "Hello";

	ft_memset(test1, 'R', 1);
	ft_memset(test2, '\0', 6);
	ft_memset(test3, 'A', 3);
	ft_memset(test4, 'A', 8);

	printf("Substitui 1 byte (H para R): %s\n", test1);
	printf("Substitui toda a string por nulo (6 bytes): %s\n", test2);
	printf("Substitui 3 bytes por A: %s\n", test3);
	printf("Substitui 8 bytes por A (maior que o "
		"tamanho da string) %s\n", test4);

	return (0);
}
*/
