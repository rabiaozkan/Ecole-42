/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 02:22:35 by rozkan            #+#    #+#             */
/*   Updated: 2022/01/31 19:28:43 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringin içerisinde ilk c paramterisinin gectigi yeri gösterir 
s=merhabalar c='a' out=abalar*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	x;

	x = (char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == x)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (NULL);
}
