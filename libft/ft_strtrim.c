/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:44:38 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/21 01:47:10 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result_str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	result_str = (char *)malloc(sizeof(char) * len + 1);
	if (!result_str)
		return (NULL);
	ft_strlcpy(result_str, s1 + start, len + 1);
	return (result_str);
}

/* #include <stdio.h>
int	main(void)
{
	char *test = ft_strtrim("lorem ipsum dolot sit amet", " ");

	printf("%s", test);
} */
