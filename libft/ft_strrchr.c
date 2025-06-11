/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:43:56 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/13 21:44:10 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*test1 = ft_strrchr("Hello", 'A');
	char	*test2 = ft_strrchr("Hello", 'l');
	char	*test3 = ft_strrchr("Hello", '\0');

	printf("Não encontra caracter, retorna null: %s\n", test1);
	printf("Encontra caracter, retorna a partir do último caso: %s\n", test2);

	if (*test3 == '\0')
		printf("Se c é caractere nulo, retorna ponteiro "
			" para fim da string: %s\n", test3);
	return (0);
}
*/