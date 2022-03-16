/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:38:39 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/19 21:29:53 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringi c parametresine gore bölme*/
#include "libft.h"
#include <stdio.h>
static int	count_words(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str && *str != c)
			i++;
		while (*str && *str != c)
			str++;
		if (*str && *str == c)
			str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static char	**func(char const *s, char c)
{
	char	**splitt;

	if (!s)
		return (NULL);
	splitt = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!splitt)
		return (NULL);
	return (splitt);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = func (s, c);
	if (!split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

int main()
{
	char const *s ="rabiaozkan";
	char c = 'a';
	char **split = ft_split(s, c);
	while (*split)
		printf("%s", *(split++));
	return (0);
}
// int main()
// {
// 	char const *s = "rabiaozkan";
// 	char c = 'a';
// 	char **str = ft_split(s, c);
// 	while (*str)
// 		printf("%s", *(str++));
// 	return (0);
// }