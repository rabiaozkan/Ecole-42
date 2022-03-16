/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 23:12:51 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/02 23:12:51 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* f fonsiyonu stringteki tum karakterlere uygulanır */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == 0)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char f(unsigned int a, char b)
// {
// 	return (ft_toupper(b));
// }
// int main()
// {
// 	char const *s = "rabiaozkan";
// 	char *str = ft_strmapi(s, f);
// 	printf("%s", str);
// 	return (0);
// }