/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:25:51 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 18:07:02 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Kaynagı hedefe kopyalar uzerine yazar */
/* Src= rabiaoz, dst=RABIAOZKAN, 5; out= rabiaOZKAN */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srs;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srs = (char *)src;
	if (!dest && !srs)
		return (NULL);
	while (i < n)
	{
		dest[i] = srs[i];
		i++;
	}
	return (dest);
}
