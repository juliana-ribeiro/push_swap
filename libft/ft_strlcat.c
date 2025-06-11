/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:27:09 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/21 02:58:35 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = dest_length;
	j = 0;
	if (n <= dest_length)
		return (src_length + n);
	if (n > 0)
	{
		while (i < (n - 1) && src[j])
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
	}
	return (dest_length + src_length);
}
