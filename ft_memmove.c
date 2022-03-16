/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 05:27:23 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 19:43:02 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* dest>source ise source'u len kadar kaydırır, sonra dest'e kopyalar*/
/* src=merhaba dst=ISTANBUL len=5  out=merhaNBUL ??*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srs;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	srs = (char *)src;
	if (!dest && !srs)
		return (NULL);
	if (dest > srs)
		while (++i <= len)
			dest[len - i] = srs[len - i];
	else
		ft_memcpy(dest, srs, len);
	return (dest);
}
