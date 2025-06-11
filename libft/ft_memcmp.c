/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:42:28 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/19 08:03:25 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	test1 = ft_memcmp("Hello", "Hello", 6);
	int	test2 = ft_memcmp("Hello", "Helo", 3);
	int	test3 = ft_memcmp("Rello", "Hello", 6);
	int	test4 = ft_memcmp("Hello", "Yello", 6);
	int	test5 = ft_memcmp("Hello", "Hello", 10);


	printf("Não há caracter diferente, retorna 0: %d\n", test1);
	printf("Existe caracter diferente, mas são iguais "
		"em n bytes (retorna 0): %d\n", test2);
	printf("s1 é diferente e maior que s2, retorna positivo: %d\n", test3);
	printf("s1 é diferente e menor que s2, retorna : %d\n", test4);
	printf("Strings são iguais, mas n bytes maior que seu "
		"tamanho pode encontrar diferença: %d\n", test5);

	return (0);
}
*/