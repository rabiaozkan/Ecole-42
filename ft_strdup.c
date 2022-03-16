/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozkan <rozkan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:39:19 by rozkan            #+#    #+#             */
/*   Updated: 2022/02/10 11:53:00 by rozkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* stringi malloc ile güvenli yere tasır */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*str;
	int		i;

	i = 0;
	size = ft_strlen(s);
	str = malloc(size + 1);
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (*s)
	{
		str[i++] = *s;
		s++;
	}
	str[size] = '\0';
	return (str);
}
