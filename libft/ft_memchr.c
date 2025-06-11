/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:42:10 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/19 08:01:00 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main (void)
{
	char	*test1 = ft_memchr("Hello", 'A', 4);
	char	*test2 = ft_memchr("Hello", 'o', 3);
	char	*test3 = ft_memchr("Hello", 'l', 6);
	char	*test4 = ft_memchr("Hello", '\0', 8);

	printf("Não encontra caracter, retorna null: %s\n", test1);
	printf("Possui o caracter, mas não encontra em n bytes "
		"(retorna null): %s\n", test2);
	printf("Possui o caracter e encontra em n bytes: %s\n", test3);

	if (*test4 == '\0')
		printf("Encontra caractere nulo em n bytes de memória: %s\n", test4);
	return (0);
}
*/
