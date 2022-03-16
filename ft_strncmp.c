/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:27:00 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 20:58:59 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* İki stringin n kadar karakterini karsılastirir
s1=bilgisayar s2=bilgiler n=5 out=ascii farkı, 0 */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n && (*str1 || *str2))
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}
