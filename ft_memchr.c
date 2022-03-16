/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:38:10 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 20:58:43 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* (*s) pointerı içerisinde, n uzunlugundaki kısımda
c parametresi varsa ekrana onun adresini yazar
s=rabiaozkan c='z' n=9  out= zkan */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
