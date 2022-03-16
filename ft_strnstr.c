/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:11:29 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 19:30:00 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* yığın stringte len kadarlık alanda needle aranır */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	    char * big = "123456789";
//      char * little = "9";
//      size_t max = 8;
//      char *s1 = strnstr(big, little, max);
//      char *s2 = ft_strnstr(big, little, max);
// 		printf("strnstr : %s",s1);
// 		printf("ft_strnstr : %s",s2);
// }