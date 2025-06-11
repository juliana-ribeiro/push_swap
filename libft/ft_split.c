/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juribeir <juribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 00:44:46 by juribeir          #+#    #+#             */
/*   Updated: 2024/10/21 15:27:33 by juribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	free(split);
}

static char	*next_word(const char **s, char c)
{
	const char	*start;
	size_t		len;
	char		*word;

	len = 0;
	while (**s == c && **s != '\0')
		(*s)++;
	start = *s;
	while (**s != c && **s != '\0')
	{
		len++;
		(*s)++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word)
	{
		ft_strlcpy(word, start, len + 1);
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i < words)
	{
		split[i] = next_word(&s, c);
		if (!split[i++])
			return (free_split(split, i - 1), NULL);
	}
	split[i] = NULL;
	return (split);
}
