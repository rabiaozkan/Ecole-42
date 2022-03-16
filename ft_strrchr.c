/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 03:08:09 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/07 19:50:19 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* c paramteresinin son gectigi yeri ara ve gosterir
s=merhabalar c='r' out= ar*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)c)
			return (&str[i]);
	}
	if (c == 0)
		return (str);
	return (NULL);
}
