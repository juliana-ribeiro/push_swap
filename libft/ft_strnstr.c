/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:43:45 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/19 06:16:44 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;
	size_t		len_little;

	str = (char *)big;
	len_little = (size_t)ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return (str);
	while (i < len && str[i])
	{
		j = 0;
		while ((i + j) < len && str[i + j] == little[j])
		{
			j++;
		}
		if (j == len_little)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*result = ft_strnstr("Hello World!", "llo", 5);

	printf("%s", result);
	return (0);
}
*/