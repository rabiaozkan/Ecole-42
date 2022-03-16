/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:52 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 19:01:58 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* b stringinde, c parametresini len kadar basa yazar*/
/* b=merhaba c='x' len=3 out=xxxhaba */
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
