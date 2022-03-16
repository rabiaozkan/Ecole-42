/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:49:49 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/08 15:00:05 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringin kenarlarından set parametresi kırpılır */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		back = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > front)
			back--;
		str = (char *)malloc(sizeof(char) * (back - front + 1));
		if (str)
			ft_strlcpy(str, &s1[front], back - front + 1);
	}
	return (str);
}

// int main()
// {
// 	char const *s1 = "bcdef-gab-----a";
// 	char const *set ="-";
// 	printf("yeni string: %s", ft_strtrim(s1, set));
// 	return (0);
// }