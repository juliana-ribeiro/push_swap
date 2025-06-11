/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:48:07 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/16 04:28:03 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || c == '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main (void)
{
	char	*test1 = ft_strchr("Hello", 'A');
	char	*test2 = ft_strchr("Hello", 'l');
	char	*test3 = ft_strchr("Hello", '\0');

	printf("Não encontra caracter, retorna null: %s\n", test1);
	printf("Encontra caracter, retorna a partir do primeiro caso: %s\n", test2);

	if (*test3 == '\0')
		printf("Se c é caractere nulo, retorna ponteiro "
			" para fim da string: %s\n", test3);
	return (0);
}
*/